#include "movie.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    Movie movie1{"The Dark Knight", "Action", 9.5};
    Movie movie2{"The Lion King", "Animate"};
/*
    Movie movie3;
    Movie movie4(movie1); //copy constructor called
    movie4 = movie2; //operator assignment called
    //movie4.operator = movie2; //operator assignment called. same as above

    Movie movie5 = movie1; //copy constructor called
    movie5 = movie2; //operator assignment called
*/

    movie1.addActor("Marc Antenor");
    movie1.addActor("Kenley Antenor");
    movie1.printInfo();

    return 0;
}