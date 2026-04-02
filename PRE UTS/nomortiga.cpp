#include <iostream>
using namespace std; 
int main () { 
    int a; 
    cout << "INPUT ANGKA:";
    cin >> a; 
    cout << "OUTPUT: " << a << endl; 
    for (int i = 0; i < a; i++) { 
        int angka = 1;
        for (int j = 0; j < i; j++) { 
            cout << angka << " ";
            angka = angka * (i - j) / (j + 1);
        }
        cout << angka << endl;
    }
}