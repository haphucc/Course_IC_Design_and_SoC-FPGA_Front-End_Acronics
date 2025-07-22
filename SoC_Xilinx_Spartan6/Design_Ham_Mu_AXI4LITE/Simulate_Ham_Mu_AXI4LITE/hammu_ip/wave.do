onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_hammu_ip/S_AXI_ACLK
add wave -noupdate /tb_hammu_ip/S_AXI_ARESETN
add wave -noupdate -color Magenta -radix hexadecimal /tb_hammu_ip/S_AXI_AWADDR
add wave -noupdate /tb_hammu_ip/S_AXI_AWVALID
add wave -noupdate /tb_hammu_ip/S_AXI_AWREADY
add wave -noupdate -color Orange -radix hexadecimal /tb_hammu_ip/S_AXI_WDATA
add wave -noupdate /tb_hammu_ip/S_AXI_WSTRB
add wave -noupdate /tb_hammu_ip/S_AXI_WVALID
add wave -noupdate /tb_hammu_ip/S_AXI_WREADY
add wave -noupdate /tb_hammu_ip/S_AXI_BREADY
add wave -noupdate /tb_hammu_ip/S_AXI_BVALID
add wave -noupdate /tb_hammu_ip/S_AXI_BRESP
add wave -noupdate -color Magenta -radix hexadecimal /tb_hammu_ip/S_AXI_ARADDR
add wave -noupdate /tb_hammu_ip/S_AXI_ARVALID
add wave -noupdate /tb_hammu_ip/S_AXI_ARREADY
add wave -noupdate /tb_hammu_ip/S_AXI_RREADY
add wave -noupdate -radix decimal /tb_hammu_ip/S_AXI_RDATA
add wave -noupdate /tb_hammu_ip/S_AXI_RVALID
add wave -noupdate /tb_hammu_ip/S_AXI_RRESP
add wave -noupdate /tb_hammu_ip/read_data
add wave -noupdate /tb_hammu_ip/DUT/slave_inst/exp_inst/i_clk
add wave -noupdate /tb_hammu_ip/DUT/slave_inst/exp_inst/i_rst_n
add wave -noupdate /tb_hammu_ip/DUT/slave_inst/exp_inst/i_load
add wave -noupdate /tb_hammu_ip/DUT/slave_inst/exp_inst/i_start
add wave -noupdate /tb_hammu_ip/DUT/slave_inst/exp_inst/i_X
add wave -noupdate /tb_hammu_ip/DUT/slave_inst/exp_inst/i_A
add wave -noupdate /tb_hammu_ip/DUT/slave_inst/exp_inst/o_done
add wave -noupdate /tb_hammu_ip/DUT/slave_inst/exp_inst/o_P
add wave -noupdate /tb_hammu_ip/DUT/slave_inst/exp_inst/current_state
add wave -noupdate /tb_hammu_ip/DUT/slave_inst/exp_inst/reg_A
add wave -noupdate /tb_hammu_ip/DUT/slave_inst/exp_inst/reg_X
add wave -noupdate /tb_hammu_ip/DUT/slave_inst/exp_inst/reg_P
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {322090 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
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
WaveRestoreZoom {0 ps} {341250 ps}
