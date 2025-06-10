# 🔢 7-Segment Display Counter (1 to 5) with ATmega168 (SimulIDE)

## Description

This project implements a simple counter that displays numbers **1 to 5** on a **7-segment display** using an **ATmega168** microcontroller. Developed and tested in **SimulIDE**, it lights up the appropriate segment pattern for each digit, with a pause between each change. After reaching 5, the count resets and repeats.


## 🎥 Demo

[![Watch the demo](https://img.youtube.com/vi/fun6AKGC84E/0.jpg)](https://www.youtube.com/watch?v=fun6AKGC84E)

Click the image above or [watch the video on YouTube](https://www.youtube.com/watch?v=fun6AKGC84E) to see the counter in action.

## Features

- Displays numbers 1 to 5 on a 7-segment display.
- Uses software delays to control timing between digits.
- Runs on an ATmega168 at a simulated 1 MHz internal clock.
- Fully simulated in **SimulIDE** (no physical hardware required).
- Written in C using the **AVR-GCC** toolchain.

## Hardware (Simulated)

- **Microcontroller:** ATmega168
- **Display:** Common cathode 7-segment display 
- **Clock Source:** Internal 1 MHz oscillator (simulated)
- **Resistors:** Series resistors between PORTB and 7-segment segments (for realism in SimulIDE)

## How It Works

- Each number (1 through 5) is displayed by outputting the corresponding segment pattern to PORTB.
- A delay is introduced between digits using `_delay_ms()` for readability.
- The pattern sequence repeats indefinitely.

## Getting Started

1. Open the project in **SimulIDE**.
2. Load the compiled `.hex` file into the ATmega168 microcontroller.
3. Connect the 7-segment display segments (A–G) to PORTB (PB7–PB1).
4. Run the simulation to observe the counter in action.

## Requirements

- SimulIDE (tested with v1.0.0 or later)
- AVR-GCC and avr-libc (for compiling the code)

## 📘 Attribution

Parts of this code and project were adapted from the book *Make: AVR Programming* by Elliot Williams.  
All rights belong to the original author and publisher. This version has been modified for educational and simulation purposes using SimulIDE.

  
## Compilation 

-avr-gcc -mmcu=atmega168 -Os -o pov.elf pov.c

-avr-objcopy -O ihex -R .eeprom pov.elf pov.hex
