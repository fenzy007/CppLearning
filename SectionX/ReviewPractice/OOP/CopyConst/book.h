#ifndef _book_h_
#define _book_h_

#include <string>

class BooksToRead
{
private:
    std::string Class_Name;
protected:
    std::string Class_Author;
    int NumberOfBooks;
    std::string* BooksTitles;

public:
    BooksToRead(
        std::string name = "Sorry! Book in progress",
        std::string author = "N/A",
        int numbooks = 0
    );
    BooksToRead(const BooksToRead &source);

    BooksToRead(BooksToRead &&source) noexcept;

    void getDetails();
    // void setBookList();
    void displayBookList();

    ~BooksToRead();

    friend void PrintBook(BooksToRead book); 
    //friend function
};

#endif