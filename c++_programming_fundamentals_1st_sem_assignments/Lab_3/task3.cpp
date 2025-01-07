#include <iostream>
using namespace std;
int main()
{
    int dividend,divisor,quotient,remainder;
    cout<<"What is dividend? ";
    cin>>dividend;
    cout<<"What is divisor? ";
    cin>>divisor;
    quotient = dividend/divisor;
    cout<<"The quotient is: "<<quotient<<endl;
    remainder = dividend%divisor;
    cout<<"The remainder is: "<<remainder<<endl;
}