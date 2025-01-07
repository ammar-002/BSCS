#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter your First number: ";
    cin>>num1;
    cout<<"Ener your Second number: ";
    cin>>num2;
    string greater = (num1>num2)?"First number is greater. " : "Second number is greater. ";
    cout<<greater;
}