#include <iostream>
using namespace std;

int main() 
{ int a, b = 0;
    float rata_rata, total = 0;

    cout << "Masukkan nilai -1 jika sudah selesai menginput nilai atau ingin mengakhiri program\n\n";
    cout << "Silahkan Masukkan nilai\n";

    while (true) 
    { 
        cout << "Masukkan nilai ke-" << b + 1 << " : ";
        cin >> a;
        if (a == -1) 
        {if (b == 0) 
        { cout << "Tidak ada nilai yang dimasukkan\n"; } 
        else 
        { rata_rata = total / b;
        cout << "\n\nNilai rata-rata : " << rata_rata << endl;}
        break;}
        else if (a < 0) 
        { cout << "Error! Masukkan bilangan bulat positif!\n"; } 
        else {total += a;
        b++;}
    }
    return 0;
}

