#include <iostream>
#include <vector>

using namespace std;

int main(){

    //Arrays
    
    /*
    int test_scores [5] {100, 95, 99, 87, 88};
    
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "First score at index 1: " << test_scores[1] << endl;
    cout << "First score at index 2: " << test_scores[2] << endl;
    cout << "First score at index 3: " << test_scores[3] << endl;
    cout << "First score at index 4: " << test_scores[4] << endl;    
    

    cout << "The first score was: " << test_scores[0] << endl;

    test_scores[0] = 120;

    cout << "The new first score is now: " << test_scores[0] << endl;
    */


   //Vectors

   /*

   vector <char> vowels {'a','e','i','o','u'};

   cout << vowels[0] << endl;
   cout << vowels.at(2) << endl;
   */

  //Vector challenges

  vector <int> vector1;
  vector <int> vector2;

  //Getting started with Vector1

  cout << "PLease enter the an element for vector1 "; //asked for the first element

  int vector1_first_element{0}; // where first element will be stored (the value 0 is for variable initialization)
  cin >> vector1_first_element; // takes data from the console and it stored the first element
  vector1.push_back(vector1_first_element); //push the first element to the Vector

  cout << "\nPLease enter the another element for vector1 ";

  int vector1_second_element{0}; // where second element will be stored
  cin >> vector1_second_element; // takes data from the console and stored the second element
  vector1.push_back(vector1_second_element); //push the second element to the Vector

  cout << "\nFirst element " << vector1.at(0) << endl;
  cout << "Second element " << vector1.at(1) << endl;

  cout << "Vector1 contains: " << vector1.size() << " elements" << endl;

  //Moving to Vector2
  cout << "\nPLease enter the an element for vector2 "; //asked for the first element

  int vector2_first_element{0}; // where first element will be stored (the value 0 is for variable initialization)
  cin >> vector2_first_element; // takes data from the console and it stored the first element
  vector2.push_back(vector2_first_element); //push the first element to the Vector

  cout << "\nPLease enter the another element for vector2 ";

  int vector2_second_element{0}; // where second element will be stored
  cin >> vector2_second_element; // takes data from the console and stored the second element
  vector2.push_back(vector2_second_element); //push the second element to the Vector

  cout << "\nFirst element " << vector2.at(0) << endl;
  cout << "Second element " << vector2.at(1) << endl;
  cout << "Vector2 contains: " << vector2.size() << " elements\n" << endl;


  //2D Vectors
  vector <vector <int>> vector_2d; 

  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;




    return 0;
}