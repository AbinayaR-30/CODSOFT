#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    char op;
    cout<<" SIMPLE CALCULATOR "<<endl;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter an operator (+,-,*,/): ";
    cin>>op;
    cout<<"Enter second number: ";
    cin>>num2;
    if(op=='+')
        cout<<"Result = "<<num1+num2<<endl;
    else if(op=='-')
        cout<<"Result = "<<num1-num2<<endl;
    else if(op=='*')
        cout<<"Result = "<<num1*num2<<endl;
    else if(op=='/'){
        if(num2!=0)
            cout<<"Result = "<<num1/num2<<endl;
        else
            cout<<"Division by zero is not possible."<<endl}
    else
        cout<<"Invalid operator."<<endl;

    return 0;}