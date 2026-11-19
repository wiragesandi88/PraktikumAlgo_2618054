
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "2618054 | I GEDE BAGUS WIRAGA SANDI \n";
    cout << "TUGAS BAB 7\n";
    cout << "Menggunakan Digit Digit NIM untuk input ! (a = 4, b = 4, c = 8)! \n";
    cout << " \n";
    cout << " \n";

    cout << "A. Program kotak angka diagonal!\n";
    cout << "Masukkan ukuran kotak! : ";
    cin >> n;

    for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= n; j++) 
		{
            if (i == j) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    
    cout << " \n";


    cout << "B. Program segitiga terbalik genap!\n";
    cout << "Masukkan ukuran segitiga! : ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n - i + 1) {
            cout << j * 2 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    cout << " \n";

    cout << "C. Program segitiga siku-siku huruf!\n";
    cout << "Masukkan ukuran segitiga siku-siku! : ";
    cin >> n;

    int j = 1;
    do {
        int g = 1;
        do {
            cout << char('A' + g - 1) << " ";
            g++;
        } while (g <= j);
        cout << endl;
        j++;
    } while (j <= n);
    
    return 0;
}

