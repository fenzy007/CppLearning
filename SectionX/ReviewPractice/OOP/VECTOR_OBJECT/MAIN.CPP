#include "STUDENT.H"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void fillVector(vector<STUDENT>*);
void printVectorr(const vector<STUDENT>&);

void fillVector(vector<STUDENT> *newMyClass)
{
    cout << "How many students are in the your class? ";
    int classSize;
    cin >> classSize;

    string name;
    char grade;

    for(int i = 0; i < classSize; i++)
    {
        cout << "\nEnter Student name: ";
        cin >> name;
        cout << "Enter Student grade: ";
        cin >> grade;

        STUDENT newStudent(name, grade);
        newMyClass->push_back(newStudent);
    }
}

void printVectorr(const vector<STUDENT>& newMyClass)
{
    unsigned int size = newMyClass.size();

    for(unsigned int i = 0; i < size; i++)
    {
        cout << endl;
        cout << "Student name: "<< newMyClass[i].getName() << endl;
        cout << "Student grade: "<< newMyClass[i].getGrade() << endl;
        
    }
}

//MAIN CPP 
int main()
{
    vector<STUDENT> myClass; //This vector is based on the class STUDENT. Therefore we can use it to create new oobjects within
    fillVector(&myClass); //pass the vector by reference because we will want to chnage what is inside
    printVectorr(myClass);

    return 0;
}