#include <iostream>
using namespace std;
float add(float num1, float num2){
return num1+num2;
}
float sub(float num1, float num2){
return num1-num2;
}
float mul(float num1, float num2){
return num1*num2;
}
float divis(float num1, float num2){
return num1/num2;
}
int main(){
    string choice;
    float num1,num2;
    cout<<"Select Operation. Type symbols( + , - , * , /): "<<endl;
    cout<<"i.   Addition "<<endl;
    cout<<"ii.  Subtraction "<<endl;
    cout<<"iii. Multiplication "<<endl;
    cout<<"iv.  Division "<<endl;
    cin>>choice;
    cout<<"You selected "<<choice<<endl;
    cout<<"Input your first number: ";
    cin>>num1;
    cout<<"Input your second number: ";
    cin>>num2;
    if (choice=="+")
    {cout<<"The addition of "<<num1<<" & "<<num2<<" is "<<add(num1,num2);}
    else if (choice=="-")
    {cout<<"The substraction of "<<num1<<" & "<<num2<<" is "<<sub(num1,num2);}
    else if (choice=="*")
    {cout<<"The muultiplication of "<<num1<<" & "<<num2<<" is "<<mul(num1,num2);}
    else if (choice=="/")
    {cout<<"The division of "<<num1<<" & "<<num2<<" is "<<divis(num1,num2);}    
    else
    {cout<<"Wrong Selectio!!!!";}  
}