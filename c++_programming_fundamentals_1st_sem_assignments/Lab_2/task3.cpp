#include <iostream>
using namespace std;
int main  ()
{
    float n1;
    cout<<"Enter your 1st number: ";
    cin>>n1;
    float n2;
    cout<<"Enter your 2nd number: ";
    cin>>n2;
    cout<<"The sum of "<<n1<<" and "<<n2<<" is "<<n1+n2<<endl;
    cout<<"The difference of "<<n1<<" and "<<n2<<" is "<<n1-n2<<endl;
    cout<<"The product of "<<n1<<" and "<<n2<<" is "<<n1*n2<<endl;
    cout<<"The division of "<<n1<<" and "<<n2<<" is "<<n1/n2<<endl;
    cout<<"The remainder of "<<n1<<" and "<<n2<<" is "<<int(n1)%int(n2)<<endl;
}
