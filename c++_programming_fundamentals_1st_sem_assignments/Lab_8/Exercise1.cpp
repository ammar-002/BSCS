#include <iostream>
#include <conio.h>  //added <conio.h> to use getche
using namespace std;
int main() { 
system("cls");
int count=0;
cout<<"Type a phrase: "; //formated double quotes
while(getche() != '\r')  //formated single quotes
{
count++;
}
cout<<"\n Character count is "<<count;  //formated double quotes
} 