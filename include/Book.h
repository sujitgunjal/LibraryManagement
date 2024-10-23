#ifndef BOOK_H
#define BOOK_H

#include <string>

using namespace std;

class Book {
protected:
    int bookID;
    string title;
    string author;
    int totalCopies;
    int availableCopies;

public:
    Book(int id, const string& t, const string& a, int copies);
    int getBookID() const;
    string getTitle() const;
    string getAuthor() const;
    int getTotalCopies() const;
    int getAvailableCopies() const;

    void setTotalCopies(int copies);
    void setAvailableCopies(int copies);
    void displayBookInfo() const;
};

#endif // BOOK_H
