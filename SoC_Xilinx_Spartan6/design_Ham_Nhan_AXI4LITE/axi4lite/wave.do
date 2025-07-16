onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_axi4_lite_slave/clk
add wave -noupdate /tb_axi4_lite_slave/rst_n
add wave -noupdate -color Magenta -radix hexadecimal /tb_axi4_lite_slave/awaddr
add wave -noupdate /tb_axi4_lite_slave/awvalid
add wave -noupdate /tb_axi4_lite_slave/awready
add wave -noupdate -color {Cornflower Blue} -radix hexadecimal /tb_axi4_lite_slave/wdata
add wave -noupdate /tb_axi4_lite_slave/wstrb
add wave -noupdate /tb_axi4_lite_slave/wvalid
add wave -noupdate /tb_axi4_lite_slave/wready
add wave -noupdate /tb_axi4_lite_slave/bready
add wave -noupdate /tb_axi4_lite_slave/bvalid
add wave -noupdate /tb_axi4_lite_slave/bresp
add wave -noupdate -color Magenta -radix hexadecimal /tb_axi4_lite_slave/araddr
add wave -noupdate /tb_axi4_lite_slave/arvalid
add wave -noupdate /tb_axi4_lite_slave/arready
add wave -noupdate -radix hexadecimal /tb_axi4_lite_slave/rdata
add wave -noupdate /tb_axi4_lite_slave/rvalid
add wave -noupdate /tb_axi4_lite_slave/rready
add wave -noupdate /tb_axi4_lite_slave/rresp
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {118333 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 87
configure wave -valuecolwidth 58
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
WaveRestoreZoom {0 ps} {141750 ps}
