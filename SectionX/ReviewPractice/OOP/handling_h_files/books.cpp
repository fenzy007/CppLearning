#include "books.h"
#include <iostream>

BooksToRead::BooksToRead(std::string name, std::string author, int numbooks)
                :Class_Name{name}, Class_Author{author}, NumberOfBooks{numbooks} 
                {
                }

void BooksToRead::getDetails()
{
    std::cout <<"Name: " << Class_Name << std::endl;
    std::cout <<"Author: " << Class_Author << std::endl;
    std::cout <<"Number Of Books: " << NumberOfBooks << std::endl;
}

void BooksToRead::setBookList()
{
    for(int i = 0; i < NumberOfBooks; i++)
    {
        std::string bookName;
        std::cout <<"\nPLease enter the name of the book: ";
        std::cin >> bookName;

        booksTitles.push_back(bookName);
    }
}

void BooksToRead::displayBookList()
{
    std::cout << "\nCurrently published books are: ";

    for(auto books:booksTitles)
    {        
        std::cout << books << " ";
    }
    std::cout << std::endl;
}