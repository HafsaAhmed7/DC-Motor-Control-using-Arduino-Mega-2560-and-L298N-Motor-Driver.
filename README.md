# DC-Motor-Control-using-Arduino-Mega-2560-and-L298N-Motor-Driver.
# 🚗 DC Motor Control using Arduino Mega 2560 & L298N Motor Driver

## 📌 Project Overview
This is my **first Arduino project** — controlling a DC motor’s **direction** and **speed** using the **Arduino Mega 2560** and the **L298N motor driver module**.  
The project demonstrates:
- Forward and reverse rotation
- PWM-based speed control
- Motor start/stop logic

---

## 🛠️ Components Used
- **Arduino Mega 2560**
- **L298N Motor Driver Module**
- **DC Motor** (Output B connection used in this project)
- Jumper wires
- Power supply (suitable for the motor)

---

## 🔌 Circuit Connections

**Arduino Mega 2560 → L298N:**
| Arduino Pin | L298N Pin | Function |
|-------------|-----------|----------|
| 8           | IN3       | Motor Direction Control (B) |
| 7           | IN4       | Motor Direction Control (B) |
| 9 (PWM)     | ENB       | Speed Control for Motor B   |
| 5V          | VCC (Logic) | Power for L298N control circuit |
| GND         | GND       | Common ground |

**L298N → Motor:**
- Output B terminals → Motor leads

**L298N Power:**
- +12V → Motor Power Input (Vmotor)
- GND → Motor Power Ground
