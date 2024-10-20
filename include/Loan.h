// include/Loan.h
#ifndef LOAN_H
#define LOAN_H

#include <string>

class Loan {
private:
    int loanID;
    int userID;
    int bookID;
    std::string dueDate;

public:
    Loan(int lID, int uID, int bID, const std::string& date);
    int getLoanID() const;
    int getUserID() const;
    int getBookID() const;
    std::string getDueDate() const;
};

#endif // LOAN_H
