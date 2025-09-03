# 🚗 Bluetooth Controlled 2-Wheel Robot Car (Tiva C Series)

A simple **Bluetooth-controlled robot car** built using the **Tiva C Series microcontroller** and a **Bluetooth module**.  
The robot moves forward, backward, left, and right based on characters (`F`, `B`, `L`, `R`) sent from a Bluetooth terminal app.

---

## 📌 Features
- Control the robot wirelessly using any Bluetooth terminal app.  
- Supports basic movement commands:
  - `F` → Forward  
  - `B` → Backward  
  - `L` → Left  
  - `R` → Right  
- Two-wheel drive with motor driver interface.  
- Simple and lightweight embedded C code for Tiva C.  

---

## 🛠️ Components Used
- **Tiva C Series LaunchPad**  
- **Bluetooth Module** 
- **Motor Driver 
- **2 DC Motors + Wheels**  
- **Robot Chassis**  
- **Battery Pack**  

---

## ⚡ Working Principle
1. The Bluetooth module receives commands from a smartphone.  
2. Tiva C reads these commands through UART.  
3. Based on the character received:
   - Drives the motors forward, backward, left, or right.  
4. Simple mapping:  

| Command | Action       |
|---------|-------------|
| F       | Forward     |
| B       | Backward    |
| L       | Left        |
| R       | Right       |

---
