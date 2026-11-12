
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "PROGRAM DERETAN ANGKA \n";
    cout << "Masukkan Jumlah Angka: ";
    cin >> n;

    int i = 1;

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i * 2 << " ";
        }
        else if (i % 3 == 0) {
            cout << i + 3 << " ";
        }
        else {
            cout << i << " ";
        }
    }
return 0;
}
