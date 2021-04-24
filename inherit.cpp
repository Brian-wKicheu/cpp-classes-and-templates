#include <iostream>
#include <list>
using namespace std;

class YouTube
{
private :
    string Name;
    int Subscribers;
    list <string> publishedVidTitle;
protected:
    string OwnerName;
    //we use protected access modifier so that we get the member in derived class(cookingYouTube)
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
//this derived class below(CookingYoutube) inherits all public members of the base class YouTube
class CookingYoutube : public YouTube{
    public:
      CookingYoutube(string name, string ownerName): YouTube( name, ownerName){

      }
      void Practice(){//this is the method of cookingYouTube class
           cout<< OwnerName <<": is Practicing cooking, new receipts, experience with skills\n";

      }

};
int main(){
     CookingYoutube cookingytChannel("Edith Kithen school", " Edith Kicheu");
    cookingytChannel.publishedVid("Apple fruits");
    cookingytChannel.publishedVid("Marshed juice");
    cookingytChannel.Subscribe();
    cookingytChannel.Subscribe();
    cookingytChannel.GetInfo();
    cookingytChannel.Practice();
    
    CookingYoutube cookingytChannel2("Lindan Kithen school", " Lindan Kicheu");
    cookingytChannel2.Practice();

    YouTube  ytChannel("Brands coding school","Brian Kicheu");

}