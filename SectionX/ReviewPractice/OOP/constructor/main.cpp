#include <iostream>
#include <string>
#include <list>

using namespace std;

class YouTubeChannel // it is not a fuctions so it doesn't use (). It is uses a comma at the end of {}
{
public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list <string> PlublisedVideoTitles;

    //declaring a constructor
    //it should have the same name as of the class
    //While the class doesn't use (), the constructor does use (). Because it is considered a method and it takes arguements.
    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscriberCount = 0; //initialized to 0 because when the channel is created, it starts with 0 subsc...
    }

    void getInfo()
    {
        // We don't have to use object.property, because we are still inside the class
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscriberCount: " << SubscriberCount << endl;

        cout << "Video: " << endl;
        for(string vids: PlublisedVideoTitles)
        {
            cout << vids << endl;
        }
    }
};

int main()
{
    YouTubeChannel myChannel("X-Machina007", "Marc");
    myChannel.getInfo();

    return 0;
}