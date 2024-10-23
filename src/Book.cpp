// src/Book.cpp
#include "Book.h"
#include <iostream>

using namespace std;

Book::Book(int id, const string& t, const string& a, int copies)
    : bookID(id), title(t), author(a), totalCopies(copies), availableCopies(copies) {}

int Book::getBookID() const { return bookID; }
string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
int Book::getTotalCopies() const { return totalCopies; }
int Book::getAvailableCopies() const { return availableCopies; }

void Book::setTotalCopies(int copies) { totalCopies = copies; }
void Book::setAvailableCopies(int copies) { availableCopies = copies; }

void Book::displayBookInfo() const {
    cout << "Book ID: " << bookID << "\nTitle: " << title
         << "\nAuthor: " << author << "\nAvailable Copies: " << availableCopies << "\n";
}
