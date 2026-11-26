#include <iostream>
#include <string>
using namespace std;

int pilihan, jenis, nim;
string nama;

int garis() {
    for (int i = 0; i < 40; i++) 
	{
        cout << "=";
    }
    cout << endl;
    return 0;
}

void DataDiri() {
    cout << "Masukkan Nama : "; getline(cin, nama);
    cout << "Masukkan Nim : "; cin >> nim;
    
    garis();
    cout << "\n";
    cout << "DATA USER : " << endl;
    cout << "Nama : " << nama << endl;
    cout << "Nim  :" << nim << endl;
    cout << "\n";
}

void BangunDatar() {
    cout << "MENU BANGUN DATAR\n";
    cout << "1. Persegi\n";
    cout << "2. Persegi Panjang\n";
    cout << "3. Segitiga\n";
    cout << "4. Lingkaran\n";
    cout << "Pilih Bangun Datar : "; cin >> jenis;
}

void Hitung() {
    double sisi, panjang, lebar, alas, tinggi, jari, luas;

    switch (jenis) {
        case 1:
            cout << "Masukkan Sisi : ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas Persegi = " << luas;
            cout << "\n";
            break;
        case 2:
            cout << "Masukkan Panjang : ";
            cin >> panjang;
            cout << "Masukkan Lebar : ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas Persegi Panjang = " << luas;
            cout << "\n";
            break;
        case 3:
            cout << "Masukkan Alas : ";
            cin >> alas;
            cout << "Masukkan Tinggi : ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas Segitiga = " << luas;
            cout << "\n";
            break;
        case 4:
            cout << "Masukkan Jari-jari : ";
            cin >> jari;
            luas = 3.14 * jari * jari;
            cout << "Luas Lingkaran = " << luas;
            cout << "\n";
            break;
        default:
            cout << "Pilihan tidak valid!";
    }
    cout << endl;
}

int main() {
    DataDiri();

    do {
        garis();
        BangunDatar();
        if (jenis >= 1 && jenis <= 4) {
            Hitung();
            cout << "Apakah anda ingin menghitung lagi?" <<endl;
            cout << "1. Hitung lagi\n";
            cout << "2. Tidak\n";
            cout << "Pilihan : "; cin >> pilihan;
        }
        else {
            cout << "Pilihan tidak tersedia!";
            pilihan = 1;
        }
    } while (pilihan != 2);

    cout << "Program selesai, Thanks bro. \n"; 
    return 0;
}
