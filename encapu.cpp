#include <iostream>
#include <list>
using namespace std;

class YouTube
{
private :
    string Name;
    string OwnerName;
    int Subscribers;
    list <string> publishedVidTitle;
    //constructor has the same name as the class and has no a return type
public :
    YouTube (string name, string ownerName){
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
    void Subscribe(){
        Subscribers++;
    }
    void Unsubscribe(){
        if(Subscribers>0)
           Subscribers--;
    }
    void  publishedVid(string tittle){
         publishedVidTitle.push_back(tittle);
    }

};

int main(){
    YouTube ytChannel("Lounge Coding Academy","Brian Kicheu");
    ytChannel.publishedVid("C++ for Begginers");
    ytChannel.publishedVid("HTL and CSS for beginners");
    ytChannel.publishedVid("C++ OOP");
    cout<< endl;

    YouTube ytChannel2("Songs", "Philip Kicheu");
     ytChannel2.publishedVid("Wanani Remix by Bahati ft Major, Petra, Odi wa Murang'a, Alihandro");
    ytChannel2.publishedVid("MAserati bybOlakire  ");
    ytChannel2.publishedVid("One last time by Ariana Grande ");

    ytChannel.Subscribe();//invoking method subscribe to object ytChannel
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();

    ytChannel.GetInfo(); //invoking method to first object to show class members
    ytChannel2.GetInfo();
}