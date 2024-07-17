#include <iostream>
#include <string>
#include <list>

using namespace std;

class YouTubeChannel // it is not a fuctions so it doesn't use (). It does use a comma at the end of {}
{
private: //encapsulation, the main attributes of the class should be private and accessed using public methods
    string Name;    
    int SubscriberCount;
    list <string> PlublisedVideoTitles;

protected: //accessible from another class but not public
    string OwnerName;

    //declaring a constructor
    //it should have the same name as of the class
    //While the class doesn't use (), the constructor does use (). Because it is considered a method and it takes arguements.
public:    
    YouTubeChannel(string name, string ownerName)
    {
        Name = name;
        OwnerName = ownerName;
        SubscriberCount = 0; //initialized to 0 because when the channel is created, it starts with 0 subsc...
    }

    void setVideos()
    {
        //create the vector
        char selection{};
        do
        {
            string item{};
            cout <<"Please enter the desired item name: ";
            cin >> item;

            PlublisedVideoTitles.push_back(item);

            cout << "\nDo you want to add another? (Y/N): ";
            cin >> selection;
        }
        while(selection == 'Y' || selection == 'y');
    }

    void getInfo()
    {
        // We don't have to use object.property, because we are still inside the class
        cout << "\nName: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscriberCount: " << SubscriberCount << endl;        
        
        //Print the vector
        cout << "Videos: ";
        for(string vids: PlublisedVideoTitles)
        {
            cout << vids << " ";
        }
    }
};

//INEHIRITANCE, A class(derived class) that inherits properties from another class(base class)
class NewYoutubeChannel: public YouTubeChannel
{
public:
    NewYoutubeChannel(string name, string ownerName): YouTubeChannel(name, ownerName)
    {}

    void practice()
    {
        cout << OwnerName << " is a good player" << endl;
    }
    

};

int main()
{
    // YouTubeChannel myChannel("X-Machina007", "Marc");
    // myChannel.setVideos();
    // myChannel.getInfo();

    NewYoutubeChannel secYoutubeChannel("Gamer_FiFa", "Kenley");
    secYoutubeChannel.setVideos();
    secYoutubeChannel.getInfo();
    secYoutubeChannel.practice();

    return 0;
}