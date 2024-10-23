// src/Library.cpp
#include "Library.h"
#include "Utility.h"
#include <iostream>
#include <algorithm>

using namespace std;

void Library::addBook() {
    int id, copies;
    string title, author;

    Utility::printHeader("Add New Book");
    cout << "Enter Book ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Title: ";
    getline(cin, title);
    cout << "Enter Author: ";
    getline(cin, author);
    cout << "Enter Number of Copies: ";
    cin >> copies;

    books.emplace_back(id, title, author, copies);
    cout << "Book added successfully!\n";
}

void Library::removeBook() {
    int id;
    Utility::printHeader("Remove Book");
    cout << "Enter Book ID to remove: ";
    cin >> id;

    auto it = remove_if(books.begin(), books.end(),
                        [id](const Book& b) { return b.getBookID() == id; });
    if (it != books.end()) {
        books.erase(it, books.end());
        cout << "Book removed successfully!\n";
    } else {
        cout << "Book ID not found!\n";
    }
}

void Library::registerMember() {
    int id;
    string name;
    Utility::printHeader("Register New Member");
    cout << "Enter Member ID: ";
    cin >> id;
    cin.ignore();
    cout << "Enter Member Name: ";
    getline(cin, name);

    members.emplace_back(id, name);
    cout << "Member registered successfully!\n";
}

void Library::listBooks() const {
    Utility::printHeader("List of Books");
    for (const auto& book : books) {
        book.displayBookInfo();
        cout << "-----------------------------\n";
    }
}

void Library::borrowBook() {
    int memberId, bookId;
    Utility::printHeader("Borrow Book");
    cout << "Enter Member ID: ";
    cin >> memberId;
    cout << "Enter Book ID: ";
    cin >> bookId;

    auto memberIt = find_if(members.begin(), members.end(),
                            [memberId](const Member& m) { return m.getUserID() == memberId; });
    if (memberIt == members.end()) {
        cout << "Member not found!\n";
        return;
    }

    auto bookIt = find_if(books.begin(), books.end(),
                          [bookId](const Book& b) { return b.getBookID() == bookId; });
    if (bookIt == books.end()) {
        cout << "Book not found!\n";
        return;
    }

    if (bookIt->getAvailableCopies() <= 0) {
        cout << "No copies available!\n";
        return;
    }

    static int loanIDCounter = 1;
    Loan loan(loanIDCounter++, memberId, bookId, "DueDate");
    loans.push_back(loan);
    memberIt->addLoan(loan);
    bookIt->setAvailableCopies(bookIt->getAvailableCopies() - 1);
    cout << "Book borrowed successfully!\n";
}

void Library::returnBook() {
    int memberId, bookId;
    Utility::printHeader("Return Book");
    cout << "Enter Member ID: ";
    cin >> memberId;
    cout << "Enter Book ID: ";
    cin >> bookId;

    auto memberIt = find_if(members.begin(), members.end(),
                            [memberId](const Member& m) { return m.getUserID() == memberId; });
    if (memberIt == members.end()) {
        cout << "Member not found!\n";
        return;
    }

    auto bookIt = find_if(books.begin(), books.end(),
                          [bookId](const Book& b) { return b.getBookID() == bookId; });
    if (bookIt == books.end()) {
        cout << "Book not found!\n";
        return;
    }

    memberIt->removeLoan(bookId);
    bookIt->setAvailableCopies(bookIt->getAvailableCopies() + 1);

    cout << "Book returned successfully!\n";
}
