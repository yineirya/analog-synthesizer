# 🎛️ Analog Synthesiser Simulator

A C program that simulates the behavior and configuration of an analog synthesizer using structured data and dynamic memory allocation.

## 📚 Course Context

This project served as my final for the **Fundamentals of UNIX and C course** in **Spring 2024**. It demonstrates the practical use of memory management and struct-based data organization in C, as part of my systems programming coursework.

## 🔧 Features

- Initializes synthesizer with user-defined model and key count
- Sets oscillator count and cutoff frequency
- Displays synthesizer properties conditionally based on initialization status
- Utilizes `structs`, `malloc`, `free`, and string handling for real-world memory management practice

## 💡 Technologies Used

- C (structs, pointers, dynamic memory)
- Terminal-based input/output
- Memory allocation & deallocation

## 📁 Project Structure

- `init_synthesiser()` – Initializes synthesizer struct with model and keys
- `set_synthesiser_settings()` – Sets oscillators and cutoff frequency
- `display_synthesiser_info()` – Outputs synthesizer data
- Includes safe memory handling and error checking
