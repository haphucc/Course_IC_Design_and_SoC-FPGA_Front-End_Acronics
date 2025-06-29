#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     top_level_ports_wave.tcl (Tue Jun 24 20:23:07 2025)
#
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "${ps}system" }

wave add $tbpath${ps}RS232_Uart_1_sout -into $id 
wave add $tbpath${ps}RS232_Uart_1_sin -into $id 
wave add $tbpath${ps}RESET -into $id 
wave add $tbpath${ps}CLK_P -into $id 
wave add $tbpath${ps}CLK_N -into $id 
wave add $tbpath${ps}dip_GPIO_IO_pin -into $id 
wave add $tbpath${ps}push_GPIO_IO_pin -into $id 
wave add $tbpath${ps}led_ip_0_LED_pin -into $id 

