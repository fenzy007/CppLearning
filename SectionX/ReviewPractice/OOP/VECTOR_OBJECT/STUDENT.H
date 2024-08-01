#ifndef _STUDENT_H
#define _STUDENT_H

#include <string>

//CLASS DECLARATION
class STUDENT 
{
private: 
    std::string newName;
    char newGrade;
    
public:
    STUDENT(std::string, char);
    ~STUDENT();
    
    std::string getName() const;
    
    char getGrade() const;
    
    void setName(std::string);
    
    void setGrade(char);
};

#endif