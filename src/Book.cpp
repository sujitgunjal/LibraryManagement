// src/Book.cpp
#include "Book.h"
#include <iostream>

Book::Book(int id, const std::string& t, const std::string& a, int copies)
    : bookID(id), title(t), author(a), totalCopies(copies), availableCopies(copies) {}

int Book::getBookID() const { return bookID; }
std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
int Book::getTotalCopies() const { return totalCopies; }
int Book::getAvailableCopies() const { return availableCopies; }

void Book::setTotalCopies(int copies) { totalCopies = copies; }
void Book::setAvailableCopies(int copies) { availableCopies = copies; }

void Book::displayBookInfo() const {
    std::cout << "Book ID: " << bookID << "\nTitle: " << title
              << "\nAuthor: " << author << "\nAvailable Copies: " << availableCopies << "\n";
}
