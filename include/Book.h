#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
protected:
    int bookID;
    std::string title;
    std::string author;
    int totalCopies;
    int availableCopies;

public:
    Book(int id, const std::string& t, const std::string& a, int copies);
    int getBookID() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    int getTotalCopies() const;
    int getAvailableCopies() const;

    void setTotalCopies(int copies);
    void setAvailableCopies(int copies);
    void displayBookInfo() const;
};

#endif // BOOK_H