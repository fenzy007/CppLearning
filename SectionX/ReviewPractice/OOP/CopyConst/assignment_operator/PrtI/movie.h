#ifndef _Movie_h_
#define _Movie_h_

#include <string>

class Movie{
private:
    std::string Class_Name;
    std::string Class_Genre;
    
protected:
    float Class_Rating;

public:
    Movie(std::string name = "None", 
          std::string genre = "None", 
          float rating = 0);
    
    Movie(const Movie& source); //copy constructor
    
    Movie& operator = (const Movie& source); //operator assignment
};

#endif