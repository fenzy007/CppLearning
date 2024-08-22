#include "array.h"
#include <iostream>

ARRAY::ARRAY()
{
    std::cout << "constructor called" << std::endl;
    for(int i{0}; i < 10; i++)
    {
        data.push_back(i);
    }
}

ARRAY::ARRAY(const ARRAY& source)
{
    std::cout << "copy constructor called" << std::endl;

    for(int i{0}; i < 10; i++)
    {
        data.push_back(source.data[i]);
    }
}

ARRAY& ARRAY::operator=(const ARRAY& source)
{
    if(&source != this)
    {
        data.clear();
        for(int i{0}; i < 10; i++)
        {
            data.push_back(source.data[i]);
        }
    }
}

ARRAY::~ARRAY()
{
    
}