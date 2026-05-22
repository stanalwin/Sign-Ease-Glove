# 🤟 SignEase Glove

An IoT-based smart assistive glove designed to help hearing and speech-impaired individuals communicate more effectively using hand gestures. The glove converts predefined hand gestures into real-time text and voice output using flex sensors, an Arduino Nano, OLED display, and DF Player Mini audio module.

---

# 📌 Project Overview

SignEase Glove is a wearable assistive communication system that detects finger movements using flex sensors and translates them into meaningful words or phrases. The recognized gesture is displayed on an OLED screen and simultaneously converted into audio output through a speaker.

The project aims to bridge the communication gap between sign language users and non-sign language users by providing a low-cost, portable, and real-time communication solution.

---

# 🚀 Features

* 🤟 Real-time hand gesture recognition
* 📟 OLED text display output
* 🔊 Voice output using DF Player Mini
* ⚡ Fast response and low latency
* 🧠 Threshold-based gesture classification
* 🎯 ~90% gesture recognition accuracy
* 🔋 Portable and lightweight wearable design
* ♿ Designed for hearing and speech-impaired users

---

# 🛠 Hardware Components

| Component            | Description                     |
| -------------------- | ------------------------------- |
| Arduino Nano         | Main microcontroller            |
| Flex Sensors (5x)    | Detect finger bending movements |
| OLED Display (0.96") | Displays recognized text        |
| DF Player Mini       | Audio playback module           |
| Speaker              | Voice output                    |
| Resistors            | Voltage divider circuit         |
| Breadboard / PCB     | Circuit connections             |
| Battery Supply       | Portable power source           |

---

# 💻 Software & Technologies Used

* Arduino IDE
* Embedded C / Arduino C
* Sensor interfacing
* Analog signal processing
* Threshold-based classification
* OLED display programming
* Serial communication

---

# ⚙️ Working Principle

1. Flex sensors attached to each finger detect bending movements.
2. The Arduino Nano continuously reads analog values from the sensors.
3. Sensor values are compared against predefined thresholds.
4. Matching patterns are mapped to specific hand gestures.
5. The detected gesture is displayed on the OLED screen.
6. The corresponding voice message is played through the DF Player Mini module.

---

# 🤖 Gesture Recognition

The system recognizes multiple predefined ASL-inspired hand gestures. Each gesture corresponds to a stored message or command.

Example gestures include:

* HELLO
* HELP
* YES
* NO
* THANK YOU
* WATER
* FOOD
* EMERGENCY
* STOP
* GOOD MORNING

---

# 📊 System Architecture

Flex Sensors → Arduino Nano → Gesture Processing → OLED Display + DF Player Mini → Speaker Output

---

# 📷 Project Demonstration

The SignEase Glove was successfully demonstrated during SRM Project Day 2024 and received appreciation for its practical implementation and social impact.

---

# 🌍 Applications

* Assistive communication devices
* Smart wearable technology
* Healthcare and rehabilitation
* Accessibility support systems
* Educational assistive tools
* Human-computer interaction systems

---

# 🔮 Future Improvements

* Machine learning-based gesture recognition
* Mobile app integration
* Wireless Bluetooth communication
* Cloud-based speech translation
* Multi-language voice support
* Rechargeable battery optimization
* Increased gesture vocabulary

---

# 🏆 Recognition

Presented at SRM Project Day 2024 and recognized by the faculty evaluation panel for innovation, embedded system integration, and real-world social impact.

---

# 📄 License

This project is intended for academic, research, and educational purposes.

---

# Project View

<p align="center">
  <img width="1079" height="482" alt="WhatsApp Image 2026-05-22 at 2 30 26 PM" src="https://github.com/user-attachments/assets/9ae92262-e0ba-400e-a0e6-dda0517c34e2" />

</p>
