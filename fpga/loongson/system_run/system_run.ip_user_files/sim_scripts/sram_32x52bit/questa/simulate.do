onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib sram_32x52bit_opt

do {wave.do}

view wave
view structure
view signals

do {sram_32x52bit.udo}

run -all

quit -force
