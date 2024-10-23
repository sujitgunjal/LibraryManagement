// src/main.cpp
#include <iostream>
#include "Library.h"
#include "Utility.h"
#include <climits>

using namespace std;

int main() {
    Library library;
    int choice;

    do {
        Utility::printHeader("Library Management System");
        cout << "1. Add Book\n";
        cout << "2. Remove Book\n";
        cout << "3. List Books\n";
        cout << "4. Register Member\n";
        cout << "5. Borrow Book\n";
        cout << "6. Return Book\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        while (cin.fail()) {
            cin.clear(); // Clear the error flags
            cin.ignore(INT_MAX, '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a number: ";
            cin >> choice;
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
                cout << "Thank you for using the Library Management System!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 7);

    return 0;
}
