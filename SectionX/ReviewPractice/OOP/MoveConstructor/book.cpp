#include "book.h"
#include <iostream>

BooksToRead::BooksToRead(std::string name,
                         std::string author,
                         size_t size,
                         std::string books                         
                        ):className{name}, classAuthor{author}, classSize{size}                          
                        {
                            classBooks = new std::string[size];
                            for(size_t i{0}; i < size; i++)
                            {
                                classBooks[i] = books[i];
                            }

                        }

void BooksToRead::getDetails()
{
    std::cout <<"Name: " << className << std::endl;
    std::cout <<"Author: " << classAuthor << std::endl;
    std::cout <<"List Of Books: ";
    for(size_t i{0}; i < classSize; i++)
    {
        std::cout << classBooks[i] << " ";
    }
}

BooksToRead::~BooksToRead()
{
    delete [] classBooks;
    classBooks = nullptr;
}