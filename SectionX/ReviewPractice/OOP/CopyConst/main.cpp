#include "book.h"

#include <string>

using namespace std;

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
    
    return 0;
}