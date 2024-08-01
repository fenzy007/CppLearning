#include "STUDENT.H"
#include <iostream>

//CONSTRUCTORS AND OTHER METHODS
STUDENT::STUDENT(std::string name, char grade)
    :newName{name}, newGrade{grade}
{}

STUDENT::~STUDENT()
{}

std::string STUDENT::getName const()
{
    return newName;
}

char STUDENT::getGrade const()
{
    return newGrade;
}

void STUDENT::setName(std::string name)
{
    newName = name;
}
    
void STUDENT::setGrade(char grade)
{
    newGrade = grade;
}