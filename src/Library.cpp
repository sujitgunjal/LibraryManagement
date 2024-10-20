// src/Library.cpp
#include "Library.h"
#include "Utility.h"
#include <iostream>
#include <algorithm>

void Library::addBook() {
    int id, copies;
    std::string title, author;

    Utility::printHeader("Add New Book");
    std::cout << "Enter Book ID: ";
    std::cin >> id;
    std::cin.ignore();
    std::cout << "Enter Title: ";
    getline(std::cin, title);
    std::cout << "Enter Author: ";
    getline(std::cin, author);
    std::cout << "Enter Number of Copies: ";
    std::cin >> copies;

    books.emplace_back(id, title, author, copies);
    std::cout << "Book added successfully!\n";
}

void Library::removeBook() {
    int id;
    Utility::printHeader("Remove Book");
    std::cout << "Enter Book ID to remove: ";
    std::cin >> id;

    auto it = std::remove_if(books.begin(), books.end(),
                             [id](const Book& b) { return b.getBookID() == id; });
    if (it != books.end()) {
        books.erase(it, books.end());
        std::cout << "Book removed successfully!\n";
    } else {
        std::cout << "Book ID not found!\n";
    }
}

void Library::registerMember() {
    int id;
    std::string name;
    Utility::printHeader("Register New Member");
    std::cout << "Enter Member ID: ";
    std::cin >> id;
    std::cin.ignore();
    std::cout << "Enter Member Name: ";
    getline(std::cin, name);

    members.emplace_back(id, name);
    std::cout << "Member registered successfully!\n";
}

void Library::listBooks() const {
    Utility::printHeader("List of Books");
    for (const auto& book : books) {
        book.displayBookInfo();
        std::cout << "-----------------------------\n";
    }
}

void Library::borrowBook() {
    int memberId, bookId;
    Utility::printHeader("Borrow Book");
    std::cout << "Enter Member ID: ";
    std::cin >> memberId;
    std::cout << "Enter Book ID: ";
    std::cin >> bookId;

    auto memberIt = std::find_if(members.begin(), members.end(),
                                 [memberId](const Member& m) { return m.getUserID() == memberId; });
    if (memberIt == members.end()) {
        std::cout << "Member not found!\n";
        return;
    }

    auto bookIt = std::find_if(books.begin(), books.end(),
                               [bookId](const Book& b) { return b.getBookID() == bookId; });
    if (bookIt == books.end()) {
        std::cout << "Book not found!\n";
        return;
    }

    if (bookIt->getAvailableCopies() <= 0) {
        std::cout << "No copies available!\n";
        return;
    }

    static int loanIDCounter = 1;
    Loan loan(loanIDCounter++, memberId, bookId, "DueDate");
    loans.push_back(loan);
    memberIt->addLoan(loan);
    bookIt->setAvailableCopies(bookIt->getAvailableCopies() - 1);
    std::cout << "Book borrowed successfully!\n";
}

void Library::returnBook() {
    int memberId, bookId;
    Utility::printHeader("Return Book");
    std::cout << "Enter Member ID: ";
    std::cin >> memberId;
    std::cout << "Enter Book ID: ";
    std::cin >> bookId;

    auto memberIt = std::find_if(members.begin(), members.end(),
                                 [memberId](const Member& m) { return m.getUserID() == memberId; });
    if (memberIt == members.end()) {
        std::cout << "Member not found!\n";
        return;
    }

    auto bookIt = std::find_if(books.begin(), books.end(),
                               [bookId](const Book& b) { return b.getBookID() == bookId; });
    if (bookIt == books.end()) {
        std::cout << "Book not found!\n";
        return;
    }

    memberIt->removeLoan(bookId);
    bookIt->setAvailableCopies(bookIt->getAvailableCopies() + 1);

    std::cout << "Book returned successfully!\n";
}
