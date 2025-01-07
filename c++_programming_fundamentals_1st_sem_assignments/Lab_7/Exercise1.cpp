#include <iostream>
using namespace std;
int main()
{
    system("cls");
    string quits;
    int num=0;
    int sum=0;
    while (true)
    {
        cout<<"Enter number: ";
        cin>>num;
        sum+=num;
        cout<<"Type quit or q to exit program: ";
        cin>>quits;
        if (quits=="quit"||quits=="q")
        {
            break;
        }        
        
    }
    cout<<"The Sum of all entered numbers is: "<<sum;
    
}