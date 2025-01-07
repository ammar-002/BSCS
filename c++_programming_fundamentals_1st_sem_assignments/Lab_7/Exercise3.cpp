#include <iostream>
using namespace std;

int main() {
    system("cls");
    int rows = 5, m = 1, n;    
    // Top half
    for (int i = 1; i <= rows; i++) {
        for (m = rows; m >= i; m--) {
            cout << " ";
        }
        for (n = 1; n <= i; n++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Middle row of stars
    for (int c = 0; c <= rows; c++) {
        cout << "* ";
    }
    cout << endl;

    // Bottom half
    for (int i = 1; i <= rows; i++) {
        for (n = 1; n <= i; n++) {
            cout << " ";
        }
        for (m = rows; m >= i; m--) {
            cout << "* ";
        }
        cout << endl;
    }
}
