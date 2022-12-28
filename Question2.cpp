//  Write a program to print absolute value of a number entered by the user.
#include<iostream>
using namespace std;
int main(){
    int number, absoluteValue;
    cout<<"-----------------------------------\n";
    cout<<"Enter a number: ";
    cin>>number;
    absoluteValue = number * (-1);
    cout<<"The absolute value of "<< number <<" is " << absoluteValue <<endl;
    cout<<"-----------------------------------\n";
    return 0;
}