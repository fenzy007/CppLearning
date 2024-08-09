#ifndef _book_h_
#define _book_h_

#include <string>
//In this Example we will create the array in main
//Contrary to the copy const Example

class BooksToRead
{
private:
    std::string className;
    std::string classAuthor;
    size_t classSize;
protected:
    std::string* classBooks;
    

public:
    BooksToRead(std::string name,
                std::string author,
                size_t size,
                std::string books);

    void getDetails();


    ~BooksToRead();
};

#endif