#include <iostream>
#include <vector>

using namespace std;

int main(){
    //IF STATEMENTS
    /*
    int package_dimension{};
    int length{};
    int width{};
    int height{};
    int max_shipping_dimension{10};    

    cout << "Please enter the length, width and height (in inches), seperated by a blan space: ";
    cin >> length >> width >> height;

    package_dimension = length * width * height;    

    if(length < max_shipping_dimension || width < max_shipping_dimension || height < max_shipping_dimension){
        int tier1_threshold{100};
        int tier2_threshold{500};
        double tier1_charge{0.10};
        double tier2_charge{0.25};
        double total_cost{};
        double package_cost{2.50};
        
        if(package_dimension > tier2_threshold) {
            total_cost = package_dimension * package_cost*(1 + tier2_charge);
            cout << "Your total cost is: " << total_cost <<" Dollars";
        } else if(package_dimension > tier1_threshold){
            total_cost = package_dimension * package_cost*(1 + tier1_charge);
            cout << "Your total cost is: " << total_cost <<" Dollars";
        } else {
            total_cost = package_dimension * package_cost;
            cout << "Your total cost is: " << total_cost <<" Dollars";
        }

        cout << "The dimention is: " << package_dimension << " cubic" << endl;

    } else {
        cout << "Sorry! We can Not ship your product due to Over The Limit." << endl;
        cout << "The dimention is: " << package_dimension << " cubic" << endl;
    }
    */

    //wHILE LOOP
    /*
    cout << "Welcome to your online account" << endl;

    cout <<"\nPlease enter an integer less than 100: ";
    int num{};
    cin >> num;

    while( num >= 100){
        cout << "\nWrong answer! Please try another number, less than 100: ";
        cin >> num;
    }

    cout << "You have successfully logged in." << endl;
    
    
    bool done{false};
    int num{0};

    cout << "PLease enter an integer between 1 and 5: ";
    cin >> num;

    while (!done)    
    {
        if(num <= 1 || num >= 5){
            cout << "You entered the wrong number. Would you like to try again: ";
            cin >> num;
        } else {
            cout << "You got it right!" << endl;
            done = true;
        }
    }
    */

   //Nested Loop
   /*
   for(int num1 {1}; num1 <= 10; ++num1){

    cout << "\n*______" << "Table_" << num1 << "______*" << endl;

    for(int num2{1}; num2 <= 10; ++num2){
        cout << num1 << " * " << num2 << " = " << num1 * num2<< endl;
    }

   }
   */

    //SECTION 9 CHALLENGE

    char selection{};
    vector <int> vec {1,2,3,4,5,6,7,8,9};

    do{
        cout << "\n" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl; 

        cout << "\nLet's go. Enter your choice:";
        cin >> selection; 

        
            switch (selection)
            {
                case 'p':
                case 'P': 
                    if(vec.size() == 0){

                    cout << "[] - the list is empty" << endl;
                    } else{

                        cout << "["; 

                        for(auto val: vec)  {
                            cout << val << " ";
                        } 

                        cout << "]" << endl;
                    }; 
                    break;

                case 'a':
                case 'A': 
                    {
                        cout << "\nEnter the number you want to add to the list: ";
                        int a_number{};
                        cin >> a_number;
                        vec.push_back(a_number);

                        cout << "\n" << a_number << " was just added to the list." << endl;
                        

                        cout << "The new list data is: " << endl;
                        
                        cout << "["; 

                        for(auto val: vec)  {
                            cout << val << " ";
                        } 

                        cout << "]" << endl;
                    };
                    break;

                case 'm':
                case 'M': 
                if(vec.size() == 0){

                    cout << "\nUnable to calculate the mean - no data." << endl;
                    
                } else{
                    int mean{};

                    for(auto val:vec){
                        mean =mean + val;
                    }
                    mean /= vec.size(); 

                    cout << "/nThe mean of this data set is: " << mean << "." << endl;
                };
                    break;

                case 's':
                case 'S': 
                    if(vec.size() == 0){

                    cout << "\nUnable to determine the smallest number - list is empty." << endl;
                    
                    } else{
                        int smallest{};

                        for (unsigned i {0}; i < vec.size() - 1; i++){
                            if(vec.at(i) - vec.at(i + 1) < 0 ){
                                smallest = vec.at(i);
                            }
                        }
                        cout << smallest << " is the smallest number" << endl;
                    };
                    break;

                case 'l':
                case 'L': if(vec.size() == 0){

                    cout << "\nUnable to determine the largest number - list is empty." << endl;
                    
                    } else{
                        int largest{};

                        for (unsigned i {0}; i < vec.size() - 1; i++){
                            if(vec.at(i) - vec.at(i + 1) < 0 ){
                                largest = vec.at(i + 1);
                            }
                        }
                        cout << "You selected, Display the largest number " << largest << endl;
                    };
                    break;

                case 'q':
                case 'Q': cout << "You selected to Quit.";
                    break;

                default: cout << "Unknown Selection, please try again.";
                    break;
            }
         

        

    } while( selection != 'q' && selection != 'Q');
    cout << "\nProgram terminated" << endl;

    

    cout << endl;
    
    return 0;
}