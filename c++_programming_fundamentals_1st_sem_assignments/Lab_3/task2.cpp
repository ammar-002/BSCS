#include <iostream>
using namespace std;
int main()
{
    float pf,ict,calculus,eng,phys;
    cout<<"Enter Your PF marks: ";
    cin>>pf;
    cout<<"Enter Your ICT marks: ";
    cin>>ict;
    cout<<"Enter Your Calculus marks: ";
    cin>>calculus;
    cout<<"Enter Your English marks: ";
    cin>>eng;
    cout<<"Enter Your Physics marks: ";
    cin>>phys;
    float total = (pf+ict+calculus+eng+phys);
    float per = (total/500)*100;
    cout<<"The total marks are "<<total<<" and the percentage is "<<per<<" %.";
}