# 💻 C++ EXPERIMENTS

A curated collection of C++ programs for practice and learning, designed with simplicity and clarity in mind.

---

## 👨‍🎓 Student Information

- **Name:** Antriksh Tripathi
- **PRN:** 24070123019
- **Branch:** ENTC  
- **Class:** A

---
# ⚙️ C++ Experiment 4: Bitwise Operators and Bit Manipulation

## 🎯 Aim
- Understand how bitwise operators work in C++
- Learn how to **set (turn ON)** and **reset (turn OFF)** specific bits in a number

---

## 📌 Objectives
🔹 Use basic bitwise operators like `&`, `|`, `^`, `~`, `<<`, `>>`  
🔹 Learn how to change just one bit in a number  
🔹 Understand how shifting bits left or right changes the value  

---

## 🧠 Theory: What Are Bitwise Operators?

Every number is made of **bits (0s and 1s)**.

They are very useful when we want to control specific bits — like in **LEDs, sensors, switches, flags**, etc.

### 🧮 Common Bitwise Operators in C++

| Operator | Symbol | Description                              |
|----------|--------|------------------------------------------|
| AND      | `&`    | Sets bit to 1 only if both bits are 1    |
| OR       | `|`    | Sets bit to 1 if at least one bit is 1   |
| XOR      | `^`    | Sets bit to 1 if only one bit is 1       |
| NOT      | `~`    | Inverts all bits                         |
| Left Shift | `<<` | Shifts bits left (×2)                    |
| Right Shift | `>>`| Shifts bits right (÷2)                   |

---

## 🔧 Set and Reset a Bit

Sometimes we want to **change only one bit**, not the whole number.

### ➕ To **Set** a Bit (Make bit = 1)
```cpp
num | (1 << pos)
```
📌 Concepts Used
Bitwise Operators: &, |, ^, ~, <<, >>

Set a bit: num | (1 << position)

Reset a bit: num & (~(1 << position))

✅ Conclusion
In this experiment, we understood how bitwise operators help manipulate individual bits within an integer. We also learned how to set and reset specific bits, a useful technique in low-level programming and hardware control applications like switches and LED systems.
