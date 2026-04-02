#include <iostream>
using namespace std;

int main() {
    int n;
    char huruf = 'A';

    cout << "Masukkan jumlah baris: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << huruf;
        }
        cout << endl;
        huruf++;
    }

}