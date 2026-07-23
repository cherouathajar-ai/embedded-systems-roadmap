# Voltage Divider

## 1. Definition

A voltage divider is a circuit made of two resistors connected in series.

It is used to produce an output voltage that is lower than the input voltage.

The output voltage is measured across resistor `R2`.

## 2. Circuit

`Vin` is connected to `R1`.

The point between `R1` and `R2` is called `Vout`.

`R2` is connected between `Vout` and ground.

```text
Vin
 |
R1
 |
+------ Vout
 |
R2
 |
GND
```

---

## 3. Formula

The voltage-divider formula is:

**Vout = Vin × R2 / (R1 + R2)**

Where:

- `Vin` is the input voltage.
- `Vout` is the output voltage.
- `R1` is connected between `Vin` and `Vout`.
- `R2` is connected between `Vout` and ground.
- `Vout` is measured across `R2`.

---

## Exercise 1

### Given

- `Vin = 5 V`
- `R1 = 10 kΩ`
- `R2 = 10 kΩ`

### Calculation

Vout = Vin × R2 / (R1 + R2)

Vout = 5 × 10 / (10 + 10)

Vout = 50 / 20

Vout = 2.5 V

### Answer

**Vout = 2.5 V**

Because `R1` and `R2` are equal, the output voltage is half of the input voltage.

---

## Exercise 2

### Given

- `Vin = 12 V`
- `R1 = 10 kΩ`
- `R2 = 5 kΩ`

### Calculation

Vout = Vin × R2 / (R1 + R2)

Vout = 12 × 5 / (10 + 5)

Vout = 60 / 15

Vout = 4 V

### Answer

**Vout = 4 V**

The output voltage is measured across `R2`.

The voltage across `R1` is:

VR1 = Vin - Vout

VR1 = 12 - 4

VR1 = 8 V

Therefore:

- Voltage across `R1` = **8 V**
- Voltage across `R2` = **4 V**
- Total voltage = **12 V**

---

## Exercise 3 — Protecting an ADC Input

### Given

- `Vin = 5 V`
- `R1 = 10 kΩ`
- `R2 = 20 kΩ`
- Maximum ADC voltage = `3.3 V`

### Calculation

Vout = Vin × R2 / (R1 + R2)

Vout = 5 × 20 / (10 + 20)

Vout = 100 / 30

Vout ≈ 3.33 V

### Safety Check

The maximum ADC voltage is `3.3 V`.

The calculated output voltage is approximately `3.33 V`.

Because:

**3.33 V > 3.3 V**

the output voltage is not safe for the ADC input.

### Answer

**Vout ≈ 3.33 V**

**ADC status: NOT SAFE**

The voltage is slightly higher than the maximum accepted ADC voltage. A practical circuit should leave a safety margin below the maximum voltage.

---

## Final Results

| Exercise | Vin | R1 | R2 | Vout | Result |
|---|---:|---:|---:|---:|---|
| Exercise 1 | 5 V | 10 kΩ | 10 kΩ | 2.5 V | Correct |
| Exercise 2 | 12 V | 10 kΩ | 5 kΩ | 4 V | Correct |
| Exercise 3 | 5 V | 10 kΩ | 20 kΩ | 3.33 V | Not safe |

---

## Important Notes

- `Vout` is measured across `R2`.
- The resistor in the numerator is `R2`.
- Increasing `R2` increases `Vout`.
- Increasing `R1` decreases `Vout`.
- When `R1` and `R2` are equal, `Vout` is half of `Vin`.
- A safety margin should be used when connecting a voltage divider to an ADC.