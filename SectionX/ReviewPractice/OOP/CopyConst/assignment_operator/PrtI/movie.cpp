#include "movie.h"
#include <iostream>
#include <string>


Movie::Movie(std::string name, 
             std::string genre, 
             float rating)
    : Class_Name{name}, Class_Genre{genre}, Class_Rating{rating}
{
    Class_actorsCounter = 0;
    Class_actors = new std::string[Class_actorsCounter];
    
}

Movie::Movie(const Movie& source)
    : Movie{source.Class_Name, 
            source.Class_Genre, 
            source.Class_Rating}
{
    /*copy constructor creates a new object based on the values
        of another object that was passes to it*/
    
    Class_actorsCounter = source.Class_actorsCounter;

    Class_actors = new std::string[Class_actorsCounter];
    for(int i{0}; i < Class_actorsCounter; i++)
    {
        Class_actors[i] = source.Class_actors[i];
    }

}

Movie& Movie::operator = (const Movie& source)
{
    if(&source != this) //if we are not copying the same object to itself
    {
        Class_Name = source.Class_Name;
        Class_Genre = source.Class_Genre;
        Class_Rating = source.Class_Rating;
        Class_actorsCounter = source.Class_actorsCounter;

        delete[] Class_actors; 
        /*delete the array because it is an already created object that
        that will copy the value of another object*/

        Class_actors = new std::string[Class_actorsCounter];
        //create new array with different address
        
        for(int i{0}; i < Class_actorsCounter; i++)
        {
            Class_actors[i] = source.Class_actors[i];
        }

        return *this;
    }    

    /*operator assignment looks/works very similarly to copy
        constructor. However, how it works is that it copies
        and then reassign values to already created object.
        It is not considered as a constructor, by the compiler
        and so it cannot take member initialezers.
        Neither does it take member delegation*/
}

Movie::~Movie()
{
        delete[] Class_actors;
        Class_actors = nullptr;
}

void Movie::addActor(std::string newActorName)
{
    std::string* newActors = new std::string[Class_actorsCounter + 1];
    for(int i{0}; i < Class_actorsCounter; i++)
    {
        newActors[i] = Class_actors[i];
    }
    newActors[Class_actorsCounter] = newActorName;
    // here Class_actorsCounter = Class_actorsCounter + 1

    delete [] Class_actors;
    //here we delete the old array

    Class_actors = newActors;
    //we replace old array by the new array
    Class_actorsCounter++;
    /*here we update Class_actorsCounter in the object to reflect
    it's new value*/

}

void Movie::printInfo() const
{
    std::cout << Class_Name << std::endl;
    std::cout << Class_Genre << std::endl;
    std::cout << Class_Rating << std::endl;
    std::cout << "Actors: ";
    for(int i{0}; i < Class_actorsCounter; i++)
    {
        /*at this point Class_actorsCounter = i + 1.
        by the time it adds a second item,
        i would still be < Class_actorsCounter*/
        
        if(i < Class_actorsCounter - 1)
        {
            std::cout << Class_actors[i] << ", "; 
        } else{
            std::cout << Class_actors[i]; 
        }
        
    }
    std::cout<<std::endl;
}