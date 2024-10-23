// src/User.cpp
#include "User.h"
#include <iostream>
#include <algorithm>

using namespace std;

// Base User class
User::User(int id, const string& n) : userID(id), name(n) {}

void User::displayInfo() const {
    cout << "User ID: " << userID << "\nName: " << name << "\n";
}

int User::getUserID() const { return userID; }
string User::getName() const { return name; }

// Member class
Member::Member(int id, const string& n) : User(id, n) {}

void Member::addLoan(const Loan& loan) {
    loans.push_back(loan);
}

void Member::removeLoan(int bookID) {
    auto it = remove_if(loans.begin(), loans.end(),
                        [bookID](const Loan& l) { return l.getBookID() == bookID; });
    if (it != loans.end()) {
        loans.erase(it, loans.end());
    }
}

void Member::displayLoans() const {
    if (loans.empty()) {
        cout << "No loans.\n";
    } else {
        for (const auto& loan : loans) {
            cout << "Loan ID: " << loan.getLoanID()
                 << ", Book ID: " << loan.getBookID()
                 << ", Due Date: " << loan.getDueDate() << "\n";
        }
    }
}

void Member::displayInfo() const {
    User::displayInfo();
    cout << "Role: Member\n";
}

// Librarian class
Librarian::Librarian(int id, const string& n) : User(id, n) {}

void Librarian::displayInfo() const {
    User::displayInfo();
    cout << "Role: Librarian\n";
}
