#include "movie.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Movie movie1{"The Dark Knight", "Action", 9.5};
    Movie movie2{"The Lion King", "Animate"};

    Movie movie3;
    Movie movie4(movie1);
    movie4 = movie2;
    
    return 0;
}