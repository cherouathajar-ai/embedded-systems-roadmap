# 30-Day Embedded Systems Roadmap

## Main objective

Become stronger in electronics, embedded C, microcontrollers,
hardware-software integration, debugging and PCB design.

## Current weaknesses

- C programming
- Debugging
- Reading datasheets
- Designing circuits independently

## Current strengths

- ESP32 and Arduino experience
- Sensors and actuators
- IoT projects
- Motivation and consistency
# Embedded Systems Roadmap — Progress

## Overall Progress

**Completed: 3 / 30 days**

Current day: **Day 4 — Pointers and Memory**

---

## Day 1 — C Foundations and Development Environment

**Status: Completed ✅**

### C Programming

- Installed and configured GCC.
- Configured Visual Studio Code for C development.
- Compiled and executed C programs from the terminal.
- Learned variables and basic data types.
- Used `printf()` and `scanf()`.
- Practiced type casting.
- Added input validation.
- Built an ADC value converter.
- Classified ADC values as:
  - LOW
  - MEDIUM
  - HIGH

### Electronics

- Reviewed voltage, current and resistance.
- Calculated an LED current-limiting resistor.

### Git and GitHub

- Created a local Git repository.
- Connected the project to GitHub.
- Used:
  - `git status`
  - `git add`
  - `git commit`
  - `git push`
- Created a `.gitignore` file.
- Excluded executable files using `*.exe`.

---

## Day 2 — Functions and Ohm's Law

**Status: Completed ✅**

### C Programming

- Learned function prototypes.
- Created functions with parameters.
- Created functions that return values.
- Used `switch` statements.
- Used a `do...while` loop.
- Added input validation with `scanf()`.
- Protected calculations from division by zero.
- Built a menu-driven electronics calculator.

### Calculator Functions

- Calculate voltage.
- Calculate current.
- Calculate resistance.
- Calculate electrical power.

### Electronics

- Practiced Ohm's law:

  `V = I × R`

- Practiced electrical power:

  `P = V × I`

- Solved resistor and LED exercises.
- Reviewed resistor power ratings and safety margins.

### Files

- `Day02/code/electronics_calculator.c`
- `Day02/electronics/ohms_law_exercises.md`
- `Day02/notes.md`

---

## Day 3 — Arrays, Sensor Data and Voltage Dividers

**Status: Completed ✅**

### C Programming

- Learned how arrays store multiple values of the same type.
- Learned that array indexes begin at zero.
- Used `for` loops to read and display array elements.
- Passed arrays to functions.
- Passed the array size as a separate function parameter.
- Used `const` to prevent functions from modifying arrays.
- Avoided out-of-bounds array access.

### Sensor Analyzer

Built a sensor-data analysis program that:

- Reads five temperature values.
- Stores the values in an array.
- Displays all stored readings.
- Calculates the average.
- Finds the minimum value.
- Finds the maximum value.
- Counts abnormal readings.
- Displays a system status:
  - NORMAL
  - WARNING

### Safe Temperature Range

- Minimum safe temperature: `18.0 °C`
- Maximum safe temperature: `30.0 °C`

A reading is abnormal when:

```c
reading < minimum_limit || reading > maximum_limit
