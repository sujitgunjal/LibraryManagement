// src/Loan.cpp
#include "Loan.h"

Loan::Loan(int lID, int uID, int bID, const std::string& date)
    : loanID(lID), userID(uID), bookID(bID), dueDate(date) {}

int Loan::getLoanID() const { return loanID; }
int Loan::getUserID() const { return userID; }
int Loan::getBookID() const { return bookID; }
std::string Loan::getDueDate() const { return dueDate; }
