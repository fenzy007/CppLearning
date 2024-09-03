#include "book.h"
#include <iostream>
#include <string>

using namespace std;

void PrintBook(BooksToRead book){
    cout << "Books written by the author " <<"'"<< book.Class_Author << "'" << ": ";

    for(int i = 0; i < book.NumberOfBooks; i++)
    {        
        std::cout << book.BooksTitles[i] << " ";
    }
}

int main()
{
    BooksToRead marcsStrories{"Stories By Marc", "Marc", 5};
    marcsStrories.getDetails();
    // marcsStrories.setBookList();
    marcsStrories.displayBookList();

    BooksToRead kenStories(move(marcsStrories));
    kenStories.getDetails();
    // kenStories.setBookList();
    kenStories.displayBookList();
    
    PrintBook(kenStories); //friend function
    return 0;
}