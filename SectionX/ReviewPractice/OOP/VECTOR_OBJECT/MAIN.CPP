#include "STUDENT.H"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void fillVector(vector<STUDENT>&);
void printVectorr(const vector<STUDENT>&);

void fillVector(vector<STUDENT>& newMyClass)
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
        cout << "\nEnter Student grade: ";
        cin >> grade;

        STUDENT newStudent(name, grade);
        newMyClass.push_back(newStudent);
    }
}

void printVectorr(const vector<STUDENT>& newMyClass)
{
    unsigned int size = newMyClass.size();

    for(unsigned int i = 0; i < size; i++)
    {
        cout << "Student name: "<< newMyClass[i].getName() << endl;
        cout << "Student grade: "<< newMyClass[i].getGrade() << endl;
        cout << endl;
    }
}

//MAIN CPP 
int main()
{
    vector<STUDENT> myClass;
    fillVector(myClass);
    printVectorr(myClass);

    return 0;
}