#include <iostream>
#include <list>
using namespace std;

//if we want to write 3rd, 4th objects we need to reapet codes hence taking more space and time
//this will make things difficult so we require a constructor
class youTube
{
public:
    string name;
    string ownerName;
    int subscribers;
    list<string> publishedVidTitle;
};
int main()
{
    youTube ytChannel; //ytchannel is an object that holds class youTube
    ytChannel.name = " Code beauty School";
    ytChannel.ownerName = " Brian Kicheu";
    ytChannel.subscribers = 0;
    ytChannel.publishedVidTitle = {"Learn c++ for beginners", "Html and CSS", "c++ OOP intro"};

    cout << " Name :" << ytChannel.name << endl;
    cout << " OwnerName :" << ytChannel.ownerName << endl;
    cout << " Subscribers Count :" << ytChannel.subscribers << endl;
    cout << " Videos : " << endl;
    for (string videoTitle : ytChannel.publishedVidTitle)
    {
        cout << videoTitle << endl;
    }
    cout <<endl;
    cout <<endl;

    // second object with class attributes
    youTube ytChannel2; //ytchannel is an object that holds class youTube
    ytChannel2.name = " Favourite songs";
    ytChannel2.ownerName = " Clen Wachira";
    ytChannel2.subscribers = 0;
    ytChannel2.publishedVidTitle = {"one last time by Ariana Grande", "Kolola by Otile Brown ft Nadia ", "Akufa juu by The Kansoul"};

    cout << " Name :" << ytChannel2.name << endl;
    cout << " OwnerName :" << ytChannel2.ownerName << endl;
    cout << " Subscribers Count :" << ytChannel2.subscribers << endl;
    cout << " Videos : " << endl;
    for (string videoTitle : ytChannel2.publishedVidTitle)
    {
        cout << videoTitle << endl;
    }

}