//  Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss.

#include<iostream>
using namespace std;
int main(){
    int cp, sp, loss, profit;
    cout<<"------------------------------------\n";
    cout<<"Enter Cost Price: ";
    cin>> cp;

    cout<<"Enter Selling cost: ";
    cin>> sp;

    if (cp == sp){
        cout<<"No Profit and No Loss\n";
    }else if (cp < sp){
        profit = sp - cp;
        cout<<"Profit: "<< profit <<endl;
    }else{
        loss = cp - sp;
        cout<<"Loss: "<< loss <<endl;
    }

    cout<<"------------------------------------\n";
    return 0;
}