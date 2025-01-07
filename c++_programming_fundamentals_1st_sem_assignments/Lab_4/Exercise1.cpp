#include <iostream>
using namespace std;
int main()
{
    system("cls");
    double radius;
    double const pi = 3.142;
    cout<<"Input radius of a circle: ";
    cin>>radius;
    cout<<"The area of circle is: "<<pi*radius*radius<<endl;
    cout<<"The perimeter of circle is: "<<pi*radius*2;
}