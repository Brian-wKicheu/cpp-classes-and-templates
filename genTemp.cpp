#include<iostream>
using namespace std;

//write a function that swaps int, char, strings
//this function requirea each data type thus making progamme long 
//we can reduce this  by using generics and templates
/*
void swap (int& a, int&  b){
      int temp = a;
      a = b;
      b = temp;
}
void swap (char& a, char&  b){
      char temp = a;
      a = b;
      b = temp;
}
void swap (string& a, string&  b){
      string temp = a;
      a = b;
      b = temp;
}
*/
template< typename Type>

void Swap ( Type& a, Type& b){
         Type temp = a;
         a = b;
         b = temp;
}

int main() {
     int t =5,  s = 7;
     cout << t <<" -" << s <<endl;
     Swap(t, s);
     cout << t <<" -" << s <<endl;

     char c = 'a',   d = 'b';
     cout << c <<" -" << d <<endl;
     Swap (c, d);
     cout << c <<" -" << d <<endl;

     string firstName ="brian",  lastName = "kicheu";
     cout << firstName<<"  " << lastName<<endl;
     Swap (firstName, lastName);
     cout << firstName <<"   " << lastName <<endl;

}