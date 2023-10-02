#include <iostream>

using namespace std;
//function prototype
void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int val);

//function definition
void print_array(const int arr[], size_t size){
    for(size_t i{0}; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void set_array(int arr[], size_t size, int val){
    for(size_t i{0}; i < size; i++){
        arr[i] = val;
    }
}

int main(){
    int my_scores[] {100, 98, 90, 86, 84};
    
    print_array(my_scores, 5); // 5 is the size of the array
    set_array(my_scores, 5, 100); //100 is the value of each element in the array
    print_array(my_scores, 5);
    print_array(my_scores, 5);
}