# Embedded Systems Roadmap

> A practical 30-day journey through C programming, electronics, microcontrollers, and embedded systems engineering.

This repository documents my learning through code, circuit calculations, technical notes, debugging, testing, and small engineering projects.

---

## Roadmap Overview

| Category | Focus |
|---|---|
| 💻 Programming | C programming, memory, pointers, structures, bitwise operations |
| ⚡ Electronics | Ohm’s law, power, voltage dividers, sensors, actuators |
| 🔌 Embedded Systems | GPIO, ADC, PWM, timers, interrupts, communication protocols |
| 🛠️ Tools | GCC, Visual Studio Code, Git, GitHub, Arduino IDE |
| 📡 Hardware | Arduino, ESP32, sensors, LEDs, motors, and electronic components |

Detailed progress is available in [`progress.md`](progress.md).

---

## Why I Created This Repository

My goal is to build a strong connection between software and hardware.

Instead of studying programming and electronics separately, this roadmap combines them through practical exercises.

| Learning step | What I do |
|---|---|
| 1. Understand | Study the programming or electronics concept |
| 2. Practice | Write code or solve circuit exercises |
| 3. Compile | Compile with warnings enabled |
| 4. Test | Test different inputs and edge cases |
| 5. Debug | Identify and correct mistakes |
| 6. Document | Write notes about what I learned |
| 7. Publish | Commit and push the completed work to GitHub |

---

## Main Learning Areas

### C Programming

| Foundations | Intermediate | Embedded C |
|---|---|---|
| Variables and data types | Arrays and strings | Bitwise operations |
| Input and output | Pointers and memory | Hardware registers |
| Conditions and loops | Structures | Modular drivers |
| Functions | Dynamic memory concepts | Low-level programming |
| Input validation | File organization | Microcontroller applications |

### Electronics

| Fundamentals | Circuit Analysis | Practical Applications |
|---|---|---|
| Voltage | Ohm’s law | LED circuits |
| Current | Electrical power | ADC protection |
| Resistance | Series circuits | Sensor interfaces |
| Units and conversions | Voltage dividers | Actuator control |
| Safety margins | Resistor ratings | Signal conditioning |

### Embedded Systems

| Microcontroller Concepts | Peripherals | Communication |
|---|---|---|
| Memory and registers | GPIO | UART |
| Digital signals | ADC | I2C |
| Analog signals | PWM | SPI |
| Timing | Timers | Serial communication |
| Interrupts | Sensors and actuators | IoT connectivity |

---

## Repository Structure

```text
embedded-systems-roadmap/
│
├── DayXX/
│   ├── code/
│   │   └── C source files
│   │
│   ├── electronics/
│   │   └── Circuit exercises and calculations
│   │
│   └── notes.md
│
├── progress.md
├── README.md
└── .gitignore
```

| File or folder | Purpose |
|---|---|
| `DayXX/code/` | C programs and coding exercises |
| `DayXX/electronics/` | Electronics calculations and circuit notes |
| `DayXX/notes.md` | Personal explanations and key lessons |
| `progress.md` | Completed work, current day, and checklists |
| `README.md` | General overview of the roadmap |
| `.gitignore` | Prevents generated files such as executables from being tracked |

---

## Featured Programs

### Electronics Calculator

A menu-driven C program for solving basic electronics calculations.

| Feature | Formula |
|---|---|
| Voltage | `V = I × R` |
| Current | `I = V / R` |
| Resistance | `R = V / I` |
| Power | `P = V × I` |

Concepts used:

- Functions
- Function prototypes
- `switch`
- `do...while`
- Input validation
- Division-by-zero protection

---

### Sensor Data Analyzer

A C program that processes a collection of simulated sensor readings.

| Analysis | Description |
|---|---|
| Average | Calculates the mean sensor value |
| Minimum | Finds the lowest reading |
| Maximum | Finds the highest reading |
| Abnormal count | Counts values outside the safe range |
| System status | Displays `NORMAL` or `WARNING` |

Concepts used:

- Arrays
- `for` loops
- Passing arrays to functions
- `const` parameters
- Data validation
- Embedded monitoring logic

---

## Development Workflow

```text
Save
  ↓
Compile
  ↓
Read warnings
  ↓
Run
  ↓
Test
  ↓
Debug
  ↓
Document
  ↓
Commit and push
```

### Compile a C program

```powershell
gcc -Wall -Wextra program.c -o program.exe
```

### Run the program

```powershell
.\program.exe
```

### Git workflow

```powershell
git status
git add .
git commit -m "Describe the completed work"
git push
```

---

## Tools and Technologies

| Type | Tools |
|---|---|
| Languages | C, C++, Python |
| Microcontrollers | ESP32, Arduino |
| Development | Visual Studio Code, GCC, Arduino IDE |
| Version control | Git, GitHub |
| Electronics | Sensors, LEDs, resistors, motors, actuators |
| Future tools | PlatformIO, serial debugging tools, simulation software |

---

## Current Progress

The roadmap status is maintained separately to avoid repeating every day inside this README.

| Progress information | Link |
|---|---|
| Completed days | [`progress.md`](progress.md) |
| Current lesson | [`progress.md`](progress.md) |
| Daily checklists | [`progress.md`](progress.md) |
| Skills developed | [`progress.md`](progress.md) |

---

## Learning Goals

By the end of this roadmap, I aim to:

| Goal | Expected outcome |
|---|---|
| Strengthen C programming | Write clean, reusable, and well-structured code |
| Understand memory | Work confidently with pointers and addresses |
| Improve electronics knowledge | Analyze and design basic circuits |
| Learn embedded C | Connect software concepts to hardware |
| Use microcontrollers | Build projects with ESP32 and Arduino |
| Learn communication protocols | Work with UART, I2C, and SPI |
| Develop engineering projects | Integrate sensors, actuators, and software |
| Prepare professionally | Build a portfolio for internships and future opportunities |

---

## Updated 30-Day Roadmap Structure

| Days | Main Focus | Key Topics |
|---|---|---|
| 1–5 | C Programming Foundations | Variables, input/output, conditions, loops, functions, arrays, pointers, and memory |
| 6–10 | Intermediate C and Electronics | Structures, bitwise operations, modular programming, series and parallel circuits, capacitors, diodes, and pull-up/pull-down resistors |
| 11–15 | Microcontroller Fundamentals | GPIO, digital inputs and outputs, ADC, PWM, buttons, LEDs, sensors, and actuators |
| 16–20 | Embedded Communication and Control | UART, I2C, SPI, timers, interrupts, button debouncing, and state machines |
| 21–24 | Power Electronics and Hardware Interfaces | Transistors, MOSFETs, relays, motors, protection circuits, power supplies, and electrical safety |
| 25–26 | PCB Design with KiCad | Schematic capture, footprints, component placement, trace routing, ground planes, design checks, and Gerber files |
| 27–29 | Integrated Embedded Project | ESP32 or Arduino project combining sensors, processing, communication, and actuator control |
| 30 | Testing and Portfolio Presentation | Final testing, debugging, documentation, repository cleanup, project presentation, and portfolio preparation |

---

## Expected Skills by the End

| Area | Expected Outcome |
|---|---|
| C Programming | Write structured, reusable, and hardware-oriented C programs |
| Electronics | Analyze basic circuits and select suitable components |
| Microcontrollers | Work with GPIO, ADC, PWM, timers, and interrupts |
| Communication | Use UART, I2C, and SPI with sensors and peripherals |
| Hardware Control | Control LEDs, relays, motors, and other actuators safely |
| PCB Design | Design a basic PCB and prepare manufacturing files |
| Debugging | Test software and hardware systematically |
| Documentation | Present projects clearly through GitHub and technical notes |

---

## Final Integrated Project

The final project will combine several skills developed throughout the roadmap.

The system should be able to:

- Read data from at least one sensor
- Process the sensor data in C
- Detect normal and abnormal conditions
- Control an LED, relay, motor, or another actuator
- Communicate using UART, I2C, SPI, Wi-Fi, or Bluetooth
- Use a circuit with suitable power and protection components
- Include clear technical documentation
- Include a basic PCB design prepared in KiCad
- Be presented as a complete GitHub portfolio project

---

## Scope of the PCB Design Section

The PCB section will cover beginner-level practical design, including:

- Drawing the circuit schematic
- Selecting component symbols
- Assigning footprints
- Placing components on the board
- Routing copper traces
- Adding a ground plane
- Running electrical and design-rule checks
- Checking connector and component orientation
- Exporting Gerber and drill files

Advanced topics such as RF design, controlled impedance, multilayer boards, high-speed USB, and industrial PCB certification are outside the scope of this 30-day roadmap.

---

## Author

### Hajar Cherouat

Electronics Systems and Automation Engineering Student

Interested in:

`Embedded Systems` · `Electronics` · `Robotics` · `IoT` · `ESP32` · `Arduino`

---

> Progress is built one concept, one circuit, and one program at a time.
