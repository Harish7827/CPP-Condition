//  Create a calculator using switch statement to perform addition, subtraction, multiplication and division.

#include<iostream>
using namespace std;
int main(){
    double firstNumber , secondNumber;    
    char o;

    cout<<"-------------------------------------\n";
    cout<<"Enter first number : ";
    cin>> firstNumber;
    cout<<"Enter second number : ";
    cin>> secondNumber;
    cout<<"Enter an operator: ";
    cin>> o;

    switch (o){
        case '+':
            cout<<"The sum of "<< firstNumber <<" and " << secondNumber <<" is " << firstNumber+secondNumber <<endl;
            break;
        
        case '-':
            cout<<"The diffrence of "<< firstNumber <<" and " << secondNumber <<" is " << firstNumber-secondNumber <<endl;
            break;
    
        case '*':
            cout<<"The product of "<< firstNumber <<" and " << secondNumber <<" is " << firstNumber*secondNumber <<endl;
            break;

        case '/':
            cout<<"The division of "<< firstNumber <<" and " << secondNumber <<" is " << firstNumber/secondNumber <<endl;
            break;

        default:
            cout<<"You entered invalid operator\n";
            break;
        }

    cout<<"-------------------------------------\n";
    return 0;
}