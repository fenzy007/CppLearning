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
    BooksToRead(std::string name, std::string author, int numbooks = 1);
    void getDetails();
    void setBookList();
    void displayBookList();
};

#endif