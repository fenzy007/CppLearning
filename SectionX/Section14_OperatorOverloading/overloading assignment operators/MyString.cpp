#include <iostream>
#include <cstring>
#include "MyString.h"

//Noargs constructor
MyString::MyString()
    :str{nullptr}
{
    str = new char[1];
    *str ='\0'; //with a null terminator
}

MyString::MyString(const char *s)
    :str{nullptr}
{
    if(s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    } else {
        str = new char[std::strlen(s) + 1];
        strcpy(str,s);
    }
}

MyString::MyString(const MyString &source)
    :str{nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    strcpy(str, source.str);
    std::cout << "Copy Constructor Used" << std::endl;
}

//Copy Assignment Operator
MyString &MyString::operator=(const MyString &rhs)
{
    std::cout << "Copy Assignment Operator Used" << std::endl;
    if(this == &rhs)
        return *this;
    
    delete [] str;
    str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(str, rhs.str);

    return *this;
}

//Desctructor
MyString::~MyString()
{
    delete [] str;
}

//Display Method
void MyString::display() const 
{
    std::cout << str << " : " << get_length() << std::endl;
}

//Length getter
int MyString::get_length() const
{
    return std::strlen(str);
}

//String Getter
const char *MyString::get_str() const
{
    return str;
}