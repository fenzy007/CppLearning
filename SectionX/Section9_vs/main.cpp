#include <iostream>

using namespace std;

int main(){
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


    return 0;
}