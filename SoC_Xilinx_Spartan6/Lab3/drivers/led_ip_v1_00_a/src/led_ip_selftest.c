/*****************************************************************************
* Filename:          E:\KhoaHoc_TKVM_ACRONICS\Xilinx_Platform_Studio\Lab3/drivers/led_ip_v1_00_a/src/led_ip_selftest.c
* Version:           1.00.a
* Description:       Contains a diagnostic self-test function for the led_ip driver
* Date:              Thu Jun 19 01:14:46 2025 (by Create and Import Peripheral Wizard)
*****************************************************************************/


/***************************** Include Files *******************************/

#include "led_ip.h"
#include "stdio.h"
#include "xio.h"
#include "xparameters.h"


/************************** Constant Definitions ***************************/

#define READ_WRITE_MUL_FACTOR 0x10

/************************** Variable Definitions ****************************/


/************************** Function Definitions ***************************/

/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the LED_IP instance to be worked on.
 *
 * @return
 *
 *    - XST_SUCCESS   if all self-test code passed
 *    - XST_FAILURE   if any self-test code failed
 *
 * @note    Caching must be turned off for this function to work.
 * @note    Self test may fail if data memory and device are not on the same bus.
 *
 */
XStatus LED_IP_SelfTest(void * baseaddr_p)
{
  Xuint32 baseaddr;
  int write_loop_index;
  int read_loop_index;
  int Index;
  
  /*
   * Check and get the device address
   */
  /*
   * Base Address maybe 0. Up to developer to uncomment line below.
  XASSERT_NONVOID(baseaddr_p != XNULL);
   */
  baseaddr = (Xuint32) baseaddr_p;

  xil_printf("******************************\n\r");
  xil_printf("* User Peripheral Self Test\n\r");
  xil_printf("******************************\n\n\r");

  /*
   * Write to user logic slave module register(s) and read back
   */
  xil_printf("User logic slave module test...\n\r");

  for (write_loop_index = 0 ; write_loop_index < LED_IP_USER_NUM_REG; write_loop_index++)
    LED_IP_mWriteSlaveReg0 (baseaddr, write_loop_index*4, (write_loop_index+1)*READ_WRITE_MUL_FACTOR);
  for (read_loop_index = 0 ; read_loop_index < LED_IP_USER_NUM_REG; read_loop_index++)
    if ( LED_IP_mReadSlaveReg0 (baseaddr, read_loop_index*4) != (read_loop_index+1)*READ_WRITE_MUL_FACTOR){
      xil_printf ("Error reading register value at address %x", (int)baseaddr + read_loop_index*4);
      return XST_FAILURE;
    }

  xil_printf("   - slave register write/read passed\n\n\r");

  /* Read the registers at the base address to ensure that this is indeed working */
  if ( (LED_IP_mReadSlaveReg0 (baseaddr, 0)) != 0x0){
    xil_printf("   - soft reset failed\n\n\r");
    return XST_FAILURE;
  }

  xil_printf("   - soft reset passed\n\n\r");

  return XST_SUCCESS;
}
