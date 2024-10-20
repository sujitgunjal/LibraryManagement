// include/User.h
#ifndef USER_H
#define USER_H

#include <string>
#include <vector>
#include "Loan.h"

class User {
protected:
    int userID;
    std::string name;

public:
    User(int id, const std::string& n);
    virtual void displayInfo() const;
    int getUserID() const;
    std::string getName() const;
};

class Member : public User {
private:
    std::vector<Loan> loans;

public:
    Member(int id, const std::string& n);
    void addLoan(const Loan& loan);
    void removeLoan(int bookID);
    void displayLoans() const;
    void displayInfo() const override;
};

class Librarian : public User {
public:
    Librarian(int id, const std::string& n);
    void displayInfo() const override;
    // Additional librarian-specific functionalities can be added here
};

#endif // USER_H
