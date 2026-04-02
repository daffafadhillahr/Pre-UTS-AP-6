#include <iostream>
using namespace std; 
int main () { 
    int a, b; 
    cout << "Masukkan jumlah angka : "; 
    cin >> a >> b; 
    
    while (b != 0) { 
        int sisa = a % b; 
        a = b;
        b = sisa; 
    }
    cout << "FPB: " << a << endl; 
}