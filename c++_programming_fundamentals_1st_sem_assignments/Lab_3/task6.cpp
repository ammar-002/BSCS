#include <iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter the number: ";
cin>>num;
string check_num = (num>0)?"Number is psitive. ":(num<0)?"Number isnegative. ":"Number is zero. ";
cout<<check_num;
}