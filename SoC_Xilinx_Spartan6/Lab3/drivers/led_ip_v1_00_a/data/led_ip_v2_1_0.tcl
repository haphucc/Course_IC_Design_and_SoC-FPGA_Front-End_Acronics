##############################################################################
## Filename:          E:\KhoaHoc_TKVM_ACRONICS\Xilinx_Platform_Studio\Lab3/drivers/led_ip_v1_00_a/data/led_ip_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Thu Jun 19 01:14:46 2025 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "led_ip" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
