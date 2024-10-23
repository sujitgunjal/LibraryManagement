// include/Loan.h
#ifndef LOAN_H
#define LOAN_H

#include <string>

using namespace std;

class Loan {
private:
    int loanID;
    int userID;
    int bookID;
    string dueDate;

public:
    Loan(int lID, int uID, int bID, const string& date);
    int getLoanID() const;
    int getUserID() const;
    int getBookID() const;
    string getDueDate() const;
};

#endif // LOAN_H
