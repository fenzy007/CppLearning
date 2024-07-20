
#include <string>

#include "books.h"

using namespace std;

int main()
{
    BooksToRead marcsStrories{"Stories By Marc", "Marc", 5};
    marcsStrories.getDetails();
    marcsStrories.setBookList();
    marcsStrories.displayBookList();

    return 0;
}
