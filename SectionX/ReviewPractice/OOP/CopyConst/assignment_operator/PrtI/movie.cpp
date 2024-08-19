#include "movie.h"
#include <iostream>
#include <string>


Movie::Movie(std::string name, 
             std::string genre, 
             float rating)
    : Class_Name{name}, Class_Genre{genre}, Class_Rating{rating}
{
    
}

Movie::Movie(const Movie& source)
    : Movie{source.Class_Name, 
            source.Class_Genre, 
            source.Class_Rating}
{
    /*copy constructor creates a new object based on the values
        of another object that was passes to it*/
}

Movie& Movie::operator = (const Movie& source)
{
    Class_Name = source.Class_Name;
    Class_Genre = source.Class_Genre;
    Class_Rating = source.Class_Rating;

    return *this;

    /*operator assignment looks/works very similarly to copy
        constructor. However, how it works is that it copies
        and then reassign values to already created object.
        It is not considered as a constructor, by the compiler
        and so it cannot take member initialezers.
        Neither does it take member delegation*/
}