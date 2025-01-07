#include <iostream>
using namespace std;
int main()
{
    float pi = 3.142;
    float radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    float area,perimeter;
    area = pi*(radius*radius);
    perimeter = 2*pi*radius;
    cout<<"Area of circle is "<<area<<" meters square" <<
     " While perimeter of circle is "<<perimeter<<" meters.";
}