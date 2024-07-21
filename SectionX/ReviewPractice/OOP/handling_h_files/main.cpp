
#include <string>

#include "books.h"

using namespace std;

int main()
{
    BooksToRead marcsStrories{"Stories By Marc", "Marc", 5};
    marcsStrories.getDetails();
    marcsStrories.setBookList();
    marcsStrories.displayBookList();

    BooksToRead kenStories{"Stories By Kenley", "Kenley"};
    kenStories.getDetails();

    BooksToRead absStories{};
    absStories.getDetails();

    return 0;
}
