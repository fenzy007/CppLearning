#include "book.h"
#include <iostream>
#include <string>

using namespace std;

void PrintBook(BooksToRead book){
    cout << "Title: " << book.Class_Name << endl;
    cout << "Author: " <<book.Class_Author << endl;
}

int main()
{
    BooksToRead marcsStrories{"Stories By Marc", "Marc", 5};
    marcsStrories.getDetails();
    // marcsStrories.setBookList();
    marcsStrories.displayBookList();

    BooksToRead kenStories(marcsStrories);
    kenStories.getDetails();
    // kenStories.setBookList();
    kenStories.displayBookList();
    
    PrintBook(marcsStrories); //friend function
    return 0;
}