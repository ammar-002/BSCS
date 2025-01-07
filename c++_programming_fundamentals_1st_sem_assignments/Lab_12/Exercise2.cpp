#include <iostream>
using namespace std;

int main()
{
    system("cls");
    string user_name;
    cout << "Please enter your name: ";
    getline(cin, user_name);
    if (user_name == "Hammad")
    {
        cout << "Welcome, Hammad! It's so wonderful to see you!" << endl;
    }
    else if (user_name == "Sadiq") {
        cout << "Oh, Sadiq!... you're here." << endl;
    } 
    else
    {
        cout << "Hello, " << user_name << "! Nice to meet you." << endl;
    }

    return 0;
}
