// src/main.cpp
#include <iostream>
#include "Library.h"
#include "Utility.h"
#include <climits>

int main() {
    Library library;
    int choice;

    do {
        Utility::printHeader("Library Management System");
        std::cout << "1. Add Book\n";
        std::cout << "2. Remove Book\n";
        std::cout << "3. List Books\n";
        std::cout << "4. Register Member\n";
        std::cout << "5. Borrow Book\n";
        std::cout << "6. Return Book\n";
        std::cout << "7. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        while (std::cin.fail()) {
            std::cin.clear(); // Clear the error flags
            std::cin.ignore(INT_MAX, '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a number: ";
            std::cin >> choice;
        }

        switch (choice) {
            case 1:
                library.addBook();
                break;
            case 2:
                library.removeBook();
                break;
            case 3:
                library.listBooks();
                break;
            case 4:
                library.registerMember();
                break;
            case 5:
                library.borrowBook();
                break;
            case 6:
                library.returnBook();
                break;
            case 7:
                std::cout << "Thank you for using the Library Management System!\n";
                break;
            default:
                std::cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 7);

    return 0;
}
