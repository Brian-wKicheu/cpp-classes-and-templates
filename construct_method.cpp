#include <iostream>
#include <list>
using namespace std;

class youTube
{
public :
    string Name;
    string OwnerName;
    int Subscribers;
    list <string> publishedVidTitle;
    //constructor has the same name as the class and has no a return type
    youTube (string name, string ownerName){
        Name = name;
        OwnerName = ownerName;
        Subscribers = 0;
    }  
    //method reduces code repeation
    //also describes behaviors of the class and 
    //when we invoke method to an object it should display class members
    //if we are in the class we dont call the object
    void GetInfo (){
        cout << "Name :" <<Name <<endl;
        cout << "OwnerName :" << OwnerName <<endl;
        cout << "Subscribers :" << Subscribers <<endl;
        cout <<" Videos"<<endl;
        for(string vidTittle : publishedVidTitle){
            cout <<vidTittle<<endl;
        }
    }
    

};

int main(){
    youTube ytChannel("Lounge Coding Academy","Brian Kicheu");
    ytChannel.publishedVidTitle.push_back("C++ for Begginers");
    ytChannel.publishedVidTitle.push_back("HTL and CSS for beginners");
    ytChannel.publishedVidTitle.push_back("C++ OOP");

    youTube ytChannel2("Songs", "Philip Kicheu");
    ytChannel.GetInfo(); //invoking method to first object to show class members
    ytChannel2.GetInfo();
}