#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int table,range;
    cout<<"Enter a table's number: ";
    cin>>table;
    cout<<"Enter a table's range: ";
    cin>>range;
    cout<<"The table of "<<table<< " is...."<<endl;
    for (int i = 1; i <= range; i++)
    {
        cout<<table<<"  *  "<<i<<"  =  "<<table*i<<endl;
    }
    
}