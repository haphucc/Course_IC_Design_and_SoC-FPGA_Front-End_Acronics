onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_exponent/i_clk
add wave -noupdate /tb_exponent/i_rst_n
add wave -noupdate /tb_exponent/i_load
add wave -noupdate /tb_exponent/i_X
add wave -noupdate /tb_exponent/i_A
add wave -noupdate /tb_exponent/i_start
add wave -noupdate /tb_exponent/o_done
add wave -noupdate /tb_exponent/o_P
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {129 ps} 0}
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
WaveRestoreZoom {21 ps} {152 ps}
