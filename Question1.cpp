//  Write a program which takes the values of length and breadth from user and check if it is a square or not

#include<iostream>
using namespace std;
int main(){
    cout<<"---------------------------------\n";
    double length, breadth;
    
    cout<<"Enter the length: ";
    cin>>length;

    cout<<"Enter the breadth: ";
    cin>>breadth;

    if (length == breadth){
        cout<<"It is a square.\n";
    }else{
        cout<<"It is rectangle.\n";
    }
    
    cout<<"---------------------------------\n";
    return 0;
}