# Day 2 — Ohm's Law and Electrical Power Exercises

## Useful Formulas

- Voltage: V = I × R
- Current: I = V / R
- Resistance: R = V / I
- Power: P = V × I
- Resistor power: P = I² × R
- Resistor power: P = V² / R

## Unit Conversions

- 1 A = 1000 mA
- 1 mA = 0.001 A
- 1 kΩ = 1000 Ω
- 1 W = 1000 mW

---

## Exercise 1 — Calculate Voltage

Given:

- Current: 20 mA
- Resistance: 330 Ω

### Conversion

Current in amperes:

20 mA = 20 / 1000 = 0.020 A

### Formula

V = I × R

### Calculation

V = 0.020 × 330

V = 6.6 V

### Final answer

The voltage across the resistor is **6.6 V**.

---

## Exercise 2 — Calculate Current

Given:

- Voltage: 12 V
- Resistance: 1 kΩ

### Conversion

Resistance in ohms:

1 kΩ = 1000 Ω

### Formula

I = V / R

### Calculation

I = 12 / 1000

I = 0.012 A

### Final answer in amperes

I = **0.012 A**

### Final answer in milliamperes

0.012 A × 1000 = 12 mA

I = **12 mA**

---

## Exercise 3 — Calculate Resistance

Given:

- Voltage: 5 V
- Current: 25 mA

### Conversion

Current in amperes:

25 mA = 25 / 1000 = 0.025 A

### Formula

R = V / I

### Calculation

R = 5 / 0.025

R = 200 Ω

### Final answer in ohms

The required resistance is **200 Ω**.

---

## Exercise 4 — Calculate Electrical Power

Given:

- Voltage: 12 V
- Current: 0.5 A

### Formula

P = V × I

### Calculation

P = 12 × 0.5

P = 6 W

### Final answer

The electrical power is **6 W**.

---

## Exercise 5 — Resistor Power Rating

Given:

- Resistance: 330 Ω
- Current: 20 mA

### Conversion

Current in amperes:

20 mA = 0.020 A

### Formula

P = I² × R

### Calculation

P = (0.020)² × 330

P = 0.0004 × 330

P = 0.132 W

### Calculated power

The resistor dissipates:

P = **0.132 W**

P = **132 mW**

### Is a 0.25 W resistor sufficient?

Yes, a 0.25 W resistor is sufficient because:

0.132 W < 0.25 W

### Explanation

The calculated power is approximately 52.8% of the resistor's maximum rating.

A 0.25 W resistor can operate in this circuit, although a 0.5 W resistor would provide a larger safety margin.

---

## Exercise 6 — LED Current-Limiting Resistor

Given:

- Supply voltage: 9 V
- LED forward voltage: 2 V
- Desired current: 15 mA

### Current conversion

15 mA = 15 / 1000

15 mA = 0.015 A

### Voltage across the resistor

Vresistor = Vsupply - VLED

Vresistor = 9 - 2

Vresistor = 7 V

### Required resistance

R = V / I

R = 7 / 0.015

R = 466.67 Ω

### Selected standard resistor

A suitable standard resistor value is:

R = **470 Ω**

A slightly higher resistance is preferred because it keeps the LED current below the desired maximum.

### Actual current

I = V / R

I = 7 / 470

I = 0.01489 A

I = 14.89 mA

### Resistor power

P = V × I

P = 7 × 0.01489

P = 0.104 W

The resistor dissipates approximately:

P = **0.104 W**

P = **104 mW**

### Final component choice

Use a:

**470 Ω, 0.25 W resistor**

The resistor safely limits the LED current to approximately 14.89 mA.

---

## Exercise 7 — Verification Using Two Power Formulas

Given:

- Voltage: 10 V
- Resistance: 100 Ω

### Current

I = V / R

I = 10 / 100

I = 0.1 A

### Power using V × I

P = V × I

P = 10 × 0.1

P = 1 W

### Power using V² / R

P = V² / R

P = 10² / 100

P = 100 / 100

P = 1 W

### Do the two results match?

Yes. Both formulas give:

P = **1 W**

This confirms that the two power formulas are equivalent for this resistor.

---

## Reflection

### 1. Why must milliamperes be converted to amperes before using the formulas?

The standard electrical formulas use current in amperes. Using milliamperes directly would make the result 1000 times too large.

### 2. Why must kilo-ohms be converted to ohms?

The standard formulas use resistance in ohms. One kilo-ohm equals 1000 ohms, so the unit must be converted before calculating.

### 3. Why is division by zero impossible when calculating current or resistance?

Division by zero has no defined mathematical result. In a C program, dividing by zero may cause an error or produce an invalid result.

### 4. Why should a resistor's rated power be higher than its calculated power?

A higher power rating prevents overheating and provides a safety margin for temperature changes, component tolerances, and variations in the circuit.