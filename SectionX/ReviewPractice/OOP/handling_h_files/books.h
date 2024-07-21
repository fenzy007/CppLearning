#ifndef _books_h_
#define _books_h_

#include <string>
#include <list>

class BooksToRead 
{
private:
    std::string Class_Name;
    
protected:
    std::string Class_Author;
    int NumberOfBooks;
    std::list<std::string> booksTitles;
public:
    BooksToRead(std::string name = "Sorry! Book in Progress", std::string Class_Author = "N/A", int numbooks = 0);
    void getDetails();
    void setBookList();
    void displayBookList();

    ~BooksToRead(){};
};

#endif