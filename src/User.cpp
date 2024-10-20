// src/User.cpp
#include "User.h"
#include <iostream>
#include <algorithm>

// Base User class
User::User(int id, const std::string& n) : userID(id), name(n) {}

void User::displayInfo() const {
    std::cout << "User ID: " << userID << "\nName: " << name << "\n";
}

int User::getUserID() const { return userID; }
std::string User::getName() const { return name; }

// Member class
Member::Member(int id, const std::string& n) : User(id, n) {}

void Member::addLoan(const Loan& loan) {
    loans.push_back(loan);
}

void Member::removeLoan(int bookID) {
    auto it = std::remove_if(loans.begin(), loans.end(),
                             [bookID](const Loan& l) { return l.getBookID() == bookID; });
    if (it != loans.end()) {
        loans.erase(it, loans.end());
    }
}

void Member::displayLoans() const {
    if (loans.empty()) {
        std::cout << "No loans.\n";
    } else {
        for (const auto& loan : loans) {
            std::cout << "Loan ID: " << loan.getLoanID()
                      << ", Book ID: " << loan.getBookID()
                      << ", Due Date: " << loan.getDueDate() << "\n";
        }
    }
}

void Member::displayInfo() const {
    User::displayInfo();
    std::cout << "Role: Member\n";
}

// Librarian class
Librarian::Librarian(int id, const std::string& n) : User(id, n) {}

void Librarian::displayInfo() const {
    User::displayInfo();
    std::cout << "Role: Librarian\n";
}
