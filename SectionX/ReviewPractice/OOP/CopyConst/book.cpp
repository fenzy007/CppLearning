#include "book.h"
#include <iostream>

BooksToRead::BooksToRead(
    std::string name,  //parameters
    std::string author,
    int numbooks
) : Class_Name{name}, //Initialisation list
    Class_Author{author}, 
    NumberOfBooks{numbooks}
{};

void BooksToRead::getDetails()
{
    std::cout <<"Name: " << Class_Name << std::endl;
    std::cout <<"Author: " << Class_Author << std::endl;
    std::cout <<"Number Of Books: " << NumberOfBooks << std::endl;
}

void BooksToRead::setBookList()
{
    BooksTitles = new std::string [NumberOfBooks];

    for(int i = 0; i < NumberOfBooks; i++)
    {
        std::string bookName;
        std::cout <<"\nPLease enter the name of the book: ";
        std::cin >> bookName;

        BooksTitles[i] = bookName;        
    }
}

void BooksToRead::displayBookList()
{
    std::cout << "\nCurrently published books are: ";

    for(int i = 0; i < NumberOfBooks; i++)
    {        
        std::cout << BooksTitles[i] << " ";
    }
    std::cout << std::endl;
}
BooksToRead::~BooksToRead(){
    delete[]BooksTitles;
    BooksTitles = nullptr;
};