// include/Library.h
#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "User.h"
#include "Loan.h"

using namespace std;

class Library {
private:
    vector<Book> books;
    vector<Member> members;
    vector<Loan> loans;

public:
    void addBook();
    void removeBook();
    void registerMember();
    void listBooks() const;
    void borrowBook();
    void returnBook();
};

#endif // LIBRARY_H
