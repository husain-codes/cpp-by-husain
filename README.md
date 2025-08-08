# 📘 cpp-by-husain

Welcome to **cpp-by-husain** — a structured, topic-wise repository to master modern C++ through clean, practical examples.

This repo covers everything from C++ fundamentals to advanced concepts like multithreading, STL, memory management, and design patterns — all explained with real code.

---

## 🧵 Current Topic: Multithreading

Explore how to create and manage threads in C++ using the Standard Library. Includes examples of:
- Creating threads with functions and lambdas
- Synchronization using mutexes and lock guards
- Avoiding race conditions and deadlocks
- Condition variables and producer-consumer problems
- A basic thread pool implementation (WIP)

📁 [06_multithreading/](./06_multithreading)

---

## 🛣️ Upcoming Topics

- ✅ Basics: Variables, Control Flow, Functions
- ✅ OOP: Classes, Inheritance, Polymorphism
- ✅ Memory: Pointers, Smart Pointers, RAII
- ✅ STL: Vectors, Maps, Sets, Algorithms
- ✅ Templates & Design Patterns
- ✅ Advanced C++: Lambdas, Move Semantics, constexpr

Stay tuned as I build out each section with well-explained code examples!

---

## 🛠️ Compile Instructions

Use `g++` with appropriate flags:

```bash
g++ -std=c++11 file.cpp -pthread -o output && ./output
