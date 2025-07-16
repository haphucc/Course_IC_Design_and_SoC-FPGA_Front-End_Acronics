##############################################################################
## Filename:          E:\KhoaHoc_TKVM_Acronics\SoC_Xilinx_Spartan6\IP_Core_HamMu_Axi4Lite/drivers/hammu_ip_v1_00_a/data/hammu_ip_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Sun Jul 13 03:37:34 2025 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "hammu_ip" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
