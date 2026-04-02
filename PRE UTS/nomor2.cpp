#include <iostream>
using namespace std; 
int main () { 
    int i, kuadrat, jumlah = 0;
    cout << "Masukkan sebuah angka: "; 
    cin >> i;  
    kuadrat = i * i;

    while(kuadrat > 0) { 
        jumlah += kuadrat % 10; 
        kuadrat /=10; 
    }
     if (jumlah == i) { 
        cout << i << " ANGKA NEON" << endl; 
    } else { 
        cout << i << " BUKAN ANGKA NEON" << endl; 
    }    
}