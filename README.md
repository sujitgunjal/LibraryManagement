# Library Management System

A console-based Library Management System implemented in C++, utilizing Object-Oriented Programming (OOP) concepts such as inheritance and polymorphism. The application is menu-driven and includes console output enhancements like colored text and styled headers for a better user experience.

## Table of Contents

- [Project Overview](#project-overview)
- [Features](#features)
- [OOP Concepts Implemented](#oop-concepts-implemented)
- [Usage](#usage)
- [Functionalities]
  - [1. Add Book]
  - [2. Remove Book]
  - [3. List Books]
  - [4. Register Member]
  - (#5-borrow-book)
  - [6. Return Book](#6-return-book)

## Project Overview

The Library Management System is designed to manage books and members in a library. It allows librarians to add or remove books, register new members, and manage borrowing and returning of books. The system is built using C++ and demonstrates key OOP principles.

## Features

- **Menu-Driven Interface**: Easy navigation through different functionalities.
- **OOP Implementation**: Uses classes, inheritance, and polymorphism.
- **Error Handling**: Validates user inputs and handles errors gracefully.
- **Console Enhancements**: Colored text and styled headers improve readability.

## OOP Concepts Implemented

- **Classes and Objects**: `Book`, `User`, `Member`, `Librarian`, `Loan`, `Library`.
- **Inheritance**: `Member` and `Librarian` classes inherit from the `User` base class.
- **Polymorphism**: Overriding the `displayInfo()` method in derived classes.
- **Encapsulation**: Using access specifiers to protect class members.
- **Abstraction**: Hiding complex implementation details from the user.
