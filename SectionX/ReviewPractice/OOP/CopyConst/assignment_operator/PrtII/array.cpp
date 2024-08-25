#include "array.h"
#include <iostream>

ARRAY::ARRAY()
{
    std::cout << "constructor called" << std::endl;
    for(size_t i{0}; i < 10; i++)
    {
        data.push_back(i);
    }
}

ARRAY::ARRAY(const ARRAY& source)
{
    std::cout << "copy constructor called" << std::endl;

    for(size_t i{0}; i < source.data.size(); i++)
    {
        data.push_back(source.data[i]);
    }
}

ARRAY& ARRAY::operator=(const ARRAY& source) noexcept
{
    if(&source != this)
    {
        data.clear();
        for(size_t i{0}; i < source.data.size(); i++)
        {
            data.push_back(source.data[i]);
        }

        return *this;
    }
}

ARRAY::~ARRAY()
{
    
}

void ARRAY::printData() const
{
    for(size_t i{0}; i < data.size(); i++)
    {
        std::cout<< data[i] << std::endl;
    }
}

void ARRAY::setData(int index, int value)
{
    data[index] = value;
}