#include <iostream>
using namespace std;
int main()
{
    system("cls");
   int iict,calc,phys,pf,eng,sum,avg;
   float perc;
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
   perc = (sum*100)/500;
   cout<<"You got "<<perc<<"%"<<endl;
   if (perc >= 75)
   	   cout<<"Passed: Grade A";
   else if (perc >= 60)
       cout<<"Passed: Grade B";
   else if (perc >= 45)
       cout<<"Passed: Grade C";
   else
       cout<<" Failed";
}