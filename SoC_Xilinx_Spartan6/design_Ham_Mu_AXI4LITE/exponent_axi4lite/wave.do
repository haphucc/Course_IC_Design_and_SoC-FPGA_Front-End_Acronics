onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_ACLK
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_ARESETN
add wave -noupdate -color Magenta -radix hexadecimal /tb_exponent_axi4_lite_slave/S_AXI_AWADDR
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_AWVALID
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_AWREADY
add wave -noupdate -color Wheat -radix hexadecimal /tb_exponent_axi4_lite_slave/S_AXI_WDATA
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_WVALID
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_WREADY
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_WSTRB
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_BREADY
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_BVALID
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_BRESP
add wave -noupdate -color Magenta -radix hexadecimal /tb_exponent_axi4_lite_slave/S_AXI_ARADDR
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_ARVALID
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_ARREADY
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_RREADY
add wave -noupdate -radix hexadecimal /tb_exponent_axi4_lite_slave/S_AXI_RDATA
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_RVALID
add wave -noupdate /tb_exponent_axi4_lite_slave/S_AXI_RRESP
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {319 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 127
configure wave -valuecolwidth 86
configure wave -justifyvalue left
configure wave -signalnamewidth 1
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ps
update
WaveRestoreZoom {0 ps} {341 ps}
