#include<iostream>
using namespace std;
int main()
{
    system("cls");
    cout<<"The first 20 odd numbers are: ";
    for (int i = 1; i <= 20; i++)
    {
        int odd = 2*i - 1;
        cout<<odd<<" "; 
    }
    
}