#include <iostream>
using namespace std;
int main()
{
    system("cls");
   int iict,calc,phys,pf,eng,sum,avg;
   cout<<"Enter your IICT Marks: ";
   cin>>iict;
   cout<<"Enter your Calculus Marks: ";
   cin>>calc;
   cout<<"Enter your Physics Marks: ";
   cin>>phys;
   cout<<"Enter your PF Marks: ";
   cin>>pf;
   cout<<"Enter your English Marks: ";
   cin>>eng;
   sum=iict+calc+phys+pf+eng;
   avg = sum/5;
   cout<<"The obtained marks are: "<<sum<<endl;
   cout<<"The averag marks are: "<<avg;

}