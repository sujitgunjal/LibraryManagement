// include/User.h
#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Loan.h"

using namespace std;

class User {
protected:
    int userID;
    string name;

public:
    User(int id, const string& n);
    virtual void displayInfo() const;
    int getUserID() const;
    string getName() const;
};

class Member : public User {
private:
    vector<Loan> loans;

public:
    Member(int id, const string& n);
    void addLoan(const Loan& loan);
    void removeLoan(int bookID);
    void displayLoans() const;
    void displayInfo() const override;
};

class Librarian : public User {
public:
    Librarian(int id, const string& n);
    void displayInfo() const override;
    // Additional librarian-specific functionalities can be added here
};

#endif // USER_H
