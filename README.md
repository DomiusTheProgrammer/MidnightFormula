# MidnightFormula
# Quadratic Formula Calculator

A simple C++ program that calculates the solutions of a quadratic equation using the **quadratic formula**.

## 📐 Formula

For a quadratic equation in the form:

```text
ax² + bx + c = 0
```

the solutions are calculated using:

```text
x₁,₂ = (-b ± √(b² - 4ac)) / (2a)
```

## 🚀 Features

- Calculates both solutions of a quadratic equation
- Handles equations with two real solutions
- Detects when there is only one real solution
- Detects when no real solutions exist
- Simple console-based interface
- Written in C++

## 🛠️ Requirements

- A C++ compiler supporting **C++11** or newer
- Windows, Linux, or macOS

## ▶️ Usage

Enter the values for `a`, `b`, and `c` when prompted.

Example:

```text
Enter a: 1
Enter b: -5
Enter c: 6

x1 = 3
x2 = 2
```

This corresponds to:

```text
x² - 5x + 6 = 0
```

## 📊 Discriminant

The program uses the discriminant:

```text
D = b² - 4ac
```

to determine the number of real solutions:

- **D > 0** → Two different real solutions
- **D = 0** → One real solution
- **D < 0** → No real solutions

## 📁 Project Structure

```text
QuadraticFormula/
├── main.cpp
└── README.md
```

## 🎯 Purpose

This project was created as a simple exercise in **C++ programming**, mathematical calculations, and handling different cases in a console application.

## 📄 License

This project is open source and available under the MIT License.
