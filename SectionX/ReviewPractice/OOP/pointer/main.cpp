#include <iostream>

using namespace std;

// int printMin(int *ptr_min, int size)
// {
//     int min{0};
    
//     for(int i{0}; i < size; i++)
//     {
//         if(ptr_min[i] < min) min = ptr_min[i];
//     }
    
//     return min;
// }

// int printMax(int *ptr_max, size_t size)
// {
//     int max{0};
    
//     for(size_t i{0}; i < size; i++)
//     {
//         if(ptr_max[i] > max) max = ptr_max[i];
//     }
    
//     return max;
// }

void printMinMax(int *ptr_arr, size_t s, int* min, int* max)
{
    for(size_t i{0}; i < s; i++)
    {
        if(ptr_arr[i] > *max) *max = ptr_arr[i];
        if(ptr_arr[i] < *min) *min = ptr_arr[i];
    }
}

int main() {
    /*When we pass an array to a function, we pass in the address 
        of the first element. Meaning that we passed in a reference of 
        that array. Therefore, on the function definition, we can use a 
        pointer to that array. Subsequently, we should not 
        write *ptr_max[i]. Because ptr_max[i] is already a dereference 
        value of that of that array.
    */
    
    int arr[5]{2,-3,8,-9,10};
    // cout << printMin(arr, sizeof(arr)/sizeof(arr[0])) << endl;
    // cout << printMax(arr, sizeof(arr)/sizeof(arr[0])) << endl;
    
    int min = arr[0];
    int max = arr[0];
    printMinMax(arr, sizeof(arr)/sizeof(arr[0]), &min, &max);
    
    cout << min << endl;
    cout << max << endl;
    
    return 0;
}