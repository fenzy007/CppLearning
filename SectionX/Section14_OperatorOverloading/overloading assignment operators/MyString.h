#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
private:
    char *str;
public:
    MyString();
    MyString(const char *s);
    MyString(const MyString &source);
    //MyString(MyString &&source);
    ~MyString();

    MyString &operator = (const MyString &rhs);
    //MyString &operator = (MyString &&rhs);

    void display() const;
    int get_length() const;
    const char *get_str() const;

};

#endif