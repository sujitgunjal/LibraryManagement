# 📚 Library Management System

A **console-based Library Management System** implemented in **C++**, utilizing **Object-Oriented Programming (OOP)** concepts such as **inheritance** and **polymorphism**. The application is **menu-driven** and includes **console output enhancements** like **colored text** and **styled headers** for a better user experience. 🖥️

---

## 📖 Table of Contents
- [📋 Project Overview](#-project-overview)
- [✨ Features](#-features)
- [🔧 Functionalities](#-functionalities)
- [📦 OOP Concepts Implemented](#-oop-concepts-implemented)
- [🚀 Usage](#-usage)

---

## 📋 Project Overview

The **Library Management System** is designed to efficiently manage books 📚 and members 👥 in a library. It enables **librarians** to **add** or **remove books**, **register new members**, and manage **borrowing** and **returning books**. The system is built with **C++**, demonstrating key OOP principles through a structured, real-world application.

---

## ✨ Features

✅ **Menu-Driven Interface**: Easily navigate through the system's features.  
✅ **OOP Implementation**: Uses **classes, inheritance, and polymorphism**.  
✅ **Error Handling**: Ensures validation of user inputs with graceful handling of errors.  
✅ **Console Enhancements**: Implements **colored text** and **designed headers** to enhance user experience. 🎨

---

## 🔧 Functionalities
1️⃣ **Add Book** 📕  
2️⃣ **Remove Book** 🗑️  
3️⃣ **List Books** 📖  
4️⃣ **Register Member** 📝  
5️⃣ **Borrow Book** 📑  
6️⃣ **Return Book** 🔄  

---

## 📦 OOP Concepts Implemented

- **📦 Classes and Objects**: `Book`, `User`, `Member`, `Librarian`, `Loan`, and `Library`.  
- **🏫 Inheritance**: `Member` and `Librarian` classes inherit from the `User` base class.  
- **🎭 Polymorphism**: The `displayInfo()` method is **overridden** in derived classes.  
- **🔒 Encapsulation**: Uses **access specifiers** to protect data within classes.  
- **🛠️ Abstraction**: Complex logic is hidden within classes, providing a simple interface for users.

---

## 🚀 Usage

1. **Clone the GitHub Repository**  
   ```bash
   git clone <repository-link>
   ```
   💡 (Replace <repository-link> with the actual GitHub link.)

2. **Navigate to the Project Directory**
   ```bash
   cd library-management-pp
   ```

3. **Run the executable file**
   ```bash
   .\library_management.exe
   ```

4. **Enjoy Using the Library Management System 🎉**
   🛠️ Example Console Output:
   ```bash
   ==============================
   Welcome to the Library Management System
   ==============================
   1. Add Book
   2. Remove Book
   3. List Books
   4. Register Member
   5. Borrow Book
   6. Return Book
   Enter your choice: 1
   Enter Book Title: C++ Primer
   Enter Author: Lippman
   Book added successfully!
   ```
