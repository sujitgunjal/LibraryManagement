// include/Library.h
#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "User.h"
#include "Loan.h"

class Library {
private:
    std::vector<Book> books;
    std::vector<Member> members;
    std::vector<Loan> loans;

public:
    void addBook();
    void removeBook();
    void registerMember();
    void listBooks() const;
    void borrowBook();
    void returnBook();
};

#endif // LIBRARY_H
