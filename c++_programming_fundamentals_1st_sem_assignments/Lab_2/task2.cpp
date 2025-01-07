#include <iostream>
using namespace std;
int main  ()
{
    float hours;
    cout<<"Enter Hours: ";
    cin >> hours;
    float mins = hours*60;
    float sec = hours*3600;
    cout<<hours<<" hours are equal to "<<mins<<" mins and "<<sec<<" seconds.";
}
