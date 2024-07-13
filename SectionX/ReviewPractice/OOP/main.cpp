#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class YouTubeChannel //This is the class
{
public:

    //Below are the attributes of the class
    string Name;
    string OwnerName;
    int SubscriberCount;
    //vector <string> PlublisedVideoTitles;
    list <string> PlublisedVideoTitles;

};

int main()
{
    YouTubeChannel ytChannel;

    ytChannel.Name = "X-Machina";
    ytChannel.OwnerName = "Marc";
    ytChannel.SubscriberCount = 2000;
    ytChannel.PlublisedVideoTitles = {"Mango", "Potato", "Banana", "Apple"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscriberCount: " << ytChannel.SubscriberCount << endl;
    

    cout << "Video: " << endl;
    for(string vids: ytChannel.PlublisedVideoTitles)
    {
        cout << vids << endl;
    }

    cout << sizeof(ytChannel.PlublisedVideoTitles) << endl;





    return 0;
}