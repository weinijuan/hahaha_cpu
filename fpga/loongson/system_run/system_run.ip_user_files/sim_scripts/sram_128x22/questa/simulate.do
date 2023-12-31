onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib sram_128x22_opt

do {wave.do}

view wave
view structure
view signals

do {sram_128x22.udo}

run -all

quit -force
