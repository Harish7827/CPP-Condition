//  Write a program to print positive number entered by the user, if user enters a negative number, it is skipped.

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"---------------------------------\n";
    cout<<"Enter a number: ";
    cin>>number;

    if (number >= 0){
        cout<<"The number is positive.\n";
    }else{
        cout<<"The number is negative and skipped.\n";
    }

    cout<<"---------------------------------\n";
    return 0;
}