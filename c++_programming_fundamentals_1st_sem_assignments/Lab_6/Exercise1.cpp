#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int month;
    cout<<"Enter Name Of Month: ";
    cin>>month;
    if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        cout<<"Month "<<month<<" has 31 days.";
    }
    else if (month==4||month==6||month==5||month==9||month==11)
    {
        cout<<"Month "<<month<<" has 30 days.";
    }
    else 
    {
        cout<<"Month "<<month<<" has 28 days.";
    }
    
}