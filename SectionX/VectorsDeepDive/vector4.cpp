#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <string> name1 {"wilny", "rose", "fani", "marc", "ken"};
    //vector assign
    /*vector <string> name2 {};
    
    name2.assign(name1.begin() + 1, name1.end() - 1);
    
    for(string name : name2)
    	{
			cout << name << endl;
        }

    cout << "*************EXAMPLE 2 **************" << endl;

    for(auto name = name1.begin(); name != name1.end(); name ++)
    {
        cout << *name << endl;
    }*/

    //vector erase
    /*cout << *(name1.begin() + 2) << endl;
    cout << *(name1.end() - 1) << endl;
    cout << "*****" << endl;

    name1.erase(name1.begin(), name1.begin()+2);

    for(auto name : name1)
    {
        cout << name << endl;
    }*/

    //vector insert a value multiple times
    name1.insert(name1.begin() + 3, 4, "mondi");
    for(auto name : name1)
    {
        cout << name << endl;
    }

    return 0;
}
