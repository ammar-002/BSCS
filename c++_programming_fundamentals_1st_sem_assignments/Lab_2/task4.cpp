#include <iostream>
using namespace std;
int main  ()
{
    string name;
    cout<<"What is your good name? ";
    getline(cin, name);
    int age;
    cout<<"What is Your Age? ";
    cin>>age;
    cout<<"Hello, "<<name<<"!"<<" You are "<<age<<" years old.";
}
