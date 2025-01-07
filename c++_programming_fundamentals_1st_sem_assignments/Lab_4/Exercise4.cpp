#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your Age: ";
    cin>>age;
    string yes = "You are eligible to vote! ";
    string no = "Your are illegible to vote! ";
    (age>=18)? cout<<yes : cout<<no ;
}