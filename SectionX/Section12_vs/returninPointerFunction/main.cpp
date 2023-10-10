#include <iostream>
#include <vector>

using namespace std;

//function prototype
int *create_arr(size_t arr_size, int init_val);
void display_arr(const int *const t_arr, size_t size);

//function definition
//We use pointer functions when we want to create memory dynamically in the heap
int *create_arr(size_t arr_size, int init_val){
    int *new_storage{nullptr}; // required to initialize pointers with nullptr
    new_storage = new int[arr_size]; //asigning value to the pointer dynamically

    for(size_t i{0}; i < arr_size; i++){
        *(new_storage + i) = init_val; // to each address inside the array pointer we add a value init_val
    }    
    return new_storage;
}

void display_arr(const int *const arr, size_t size){ //const int: the value of the pointer is read only, *const arr: the address is read only
    for(size_t i{0}; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

//function call
int main(){
    size_t arr_size{};
    int init_val{};

    int *t_arr{nullptr};

    cout << "Please enter the size of the array: ";
    cin >> arr_size;

    cout << "Please enter the inital values: ";
    cin >> init_val;

    t_arr = create_arr(arr_size, init_val); //when we call the function we don't include the data type

    display_arr(t_arr, arr_size);

    delete [] t_arr;
    
    return 0;
}