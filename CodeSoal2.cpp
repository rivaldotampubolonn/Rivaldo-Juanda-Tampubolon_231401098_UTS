#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Masukkan n (2 >= n <= 10): ";
    cin >> n;

    if (n >= 2 && n <= 10) 
    {
        for (int row = 1; row <= n; row++) {
            for (int column = 1; column <= row; column++) {
                cout << "X ";
            }
            cout << endl;
        }


        for (int row = 1; row <= n; row++) {
            for (int space = 1; space <= n; space++) {
                cout << "  ";}
            for (int column = 2; column <= row; column++) {
                cout << "  ";}
           
            for (int column = n; column >= row; column--) {
                cout << "X ";}
            cout << endl;
        }
    } else 
        {cout << "Inputan tidak memenuhi batas" << endl;}

    return 0;
}

