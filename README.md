# Embedded Systems Engineering Roadmap
This repository documents my practical journey to improve my skills in electronics, embedded systems, C programming, hardware design, and system integration.

## About Me
I am a second-year preparatory engineering student at ENSA Tangier. In September, I will join the Electronics Systems and Automation engineering cycle. I am especially interested in embedded systems, electronics, robotics, and IoT.

## Objectives

- Strengthen my C programming skills
- Improve my understanding of electronic circuits
- Learn professional microcontroller development
- Practise hardware-software integration
- Learn PCB design and hardware debugging
- Build complete and documented embedded systems projects
- Prepare for internships and future engineering opportunities

## Roadmap Structure

Each day contains:

- Programming exercises
- Electronics theory and calculations
- Practical embedded systems work
- Notes and reflections
- Git commits documenting my progress
## Progress

### Day 1 — C and Electronics Foundations

During Day 1, I:

- Configured VS Code, GCC, Git, and GitHub
- Learned how to compile and run C programs
- Created a 12-bit ADC converter
- Converted ADC readings into voltage and percentage
- Added input validation
- Classified voltage levels as LOW, MEDIUM, or HIGH
- Calculated an LED current-limiting resistor
- Created and pushed my first Git commits
## Day 1 Project — ADC Converter

The ADC converter receives a raw 12-bit ADC value between 0 and 4095.

It calculates:

- The corresponding voltage between 0 V and 3.3 V
- The percentage of the ADC range
- The signal level: LOW, MEDIUM, or HIGH

### Signal Classification

- Below 1.0 V: LOW
- From 1.0 V to 2.5 V: MEDIUM
- Above 2.5 V: HIGH
## Tools and Technologies

- C
- GCC
- Visual Studio Code
- Git
- GitHub
## Repository Structure

```text
Embedded-Systems-Roadmap/
├── Day01/
│   ├── code/
│   ├── electronics/
│   └── notes.md
├── resources/
├── progress.md
└── README.md
```
## Learning Approach

My objective is not only to complete tutorials. I want to understand, implement, test, debug, and document every project myself.
### Day 2 — Functions, Loops and Ohm's Law

During Day 2, I:

- Studied C expressions, declarations, and numeric types
- Learned function prototypes, parameters, arguments, and return values
- Built a menu-driven electronics calculator
- Used separate functions for voltage, current, resistance, and power
- Added a switch statement and a do-while loop
- Added input validation and division-by-zero protection
- Solved Ohm's law and electrical power exercises