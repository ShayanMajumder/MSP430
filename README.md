# MSP430
A microcontroller is a compact integrated circuit designed to govern a specific operation in an embedded system.
A typical microcontroller includes a processor, memory and input/output (I/O) peripherals on a single chip.

## What is MSP430 microcontroller?
There are six general generations of MSP430 processors. In order of development, they are the '3xx generation, the
'1xx generation, the '4xx generation, the '2xx generation, the '5xx generation, and the '6xx generation. The digit 
after the generation identifies the model (generally higher model numbers are larger and more capable), the third digit 
identifies the amount of memory on board, and the fourth, if present, identifies a minor model variant. The most common 
variation is a different on-chip analog-to-digital converter.

The 3xx and 1xx generations are limited to a 16-bit address space. In the later generations this was expanded to include 
'430X' instructions that allow a 20-bit address space. As happened with other processor architectures (e.g. the processor of the PDP-11)
, extending the addressing range beyond the 16-bit word size introduced some peculiarities and inefficiencies for programs larger than 64
kBytes.

In the following list, it helps to think of the typical 200 mA·Hr capacity of a CR2032 lithium coin cell as 200,000 μA·Hr, or 22.8 μA·
year. Thus, considering only the CPU draw, such a battery could supply a 0.7 μA current draw for 32 years. (In reality, battery 
self-discharge would reduce this number.)

The significance of the 'RAM retention' vs the 'real-time clock mode' is that in real time clock mode the CPU can go to sleep with a 
clock running which will wake it up at a specific future time. In RAM retention mode, some external signal is required to wake it,
e.g. I/O pin signal or SPI slave receive interrupt.

## Code description-

1. **LED_ON.C**
This is the "Hello World" of getting started with msp 430 microcontroller and just simply switches on the led.

2. **LED_BLINK_USING_INTERRUPTS.C**
This is a little more complex code which uses interrupts in the program and helps blink the LED using input pins.More about interrupts can be read [here](https://www.argenox.com/library/msp430/msp430-interrupts-and-low-power-chapter-7/)

