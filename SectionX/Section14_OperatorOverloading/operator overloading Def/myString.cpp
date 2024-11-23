#include <iostream>
#include <cstring>
#include "MyString.h"

//no args const
MyString::MyString()
    :str{nullptr}
{
    str = new char[1]; //set space for 1 character
    *str = '\0'; //added a singl charater with a null terminator in it
    //that way it displays nothing
}

//Overloaded const
MyString::MyString(const char *s)
    :str {nullptr}
{
        if(s==nullptr)
        {
            str = new char[1];
            *str='\0';
        } else
        {
            str = new char[std::strlen(s) + 1]; //one extra space for the terminator
            std::strcpy(str, s);
        }
}

//Copy const
MyString::MyString(const MyString &source)
    :str{nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

//destruct
MyString::~MyString()
{
    delete [] str;
}

//display method
void MyString::display() const
{
    std::cout << str << ": " << get_length() << std::endl;
}

//Length getter
int MyString::get_length() const {return std::strlen(str);}

//string getter
const char *MyString::get_str() const {return str;}