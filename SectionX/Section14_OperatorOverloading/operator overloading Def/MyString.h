#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
private:
    char *str; //pointer to a char[] that holds a C-Style string
public:
    MyString();
    MyString(const char *s); //overloaded constructor
    MyString(const MyString &source);
    ~MyString();

    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif //_MYSTRING_H_