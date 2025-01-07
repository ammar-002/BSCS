#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int divisor,dividend,quotient,remainder;
    cout<<"Enter a divisor: ";
    cin>>divisor;
    cout<<"Enter a dividend: ";
    cin>>dividend;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout<<"Quotient: "<<quotient<<"\nRemainder: "<<remainder;
}