
#include <iostream>
#include <string>
using namespace std;

string nama, hp;
int pilihan;
int tarifCuciBiasa = 5000;
int tarifCuciSetrika = 7000;

void Garis() {
    for (int i = 0; i < 40; i++)
	{
        cout << "=";
    }
    cout << endl;
}

void dataPelanggan() {
    cout << "Masukkan Nama : ";
    getline(cin, nama);
    cout << "Masukkan No HP: ";
    getline(cin, hp);
}

void tampilkanTarif() {
    Garis();
    cout << "DAFTAR TARIF LAUNDRY\n";
    cout << "Cuci Biasa   : Rp" << tarifCuciBiasa << "/kg\n";
    cout << "Cuci Setrika : Rp" << tarifCuciSetrika << "/kg\n";
    Garis();
}

double hitungCuciBiasa() {
    double berat, total;
    cout << "Masukkan Berat Pakaian (kg) : "; cin >> berat;
    total = berat * tarifCuciBiasa;
    return total;
}

double hitungCuciSetrika() {
    double berat, total;
    cout << "Masukkan Berat Pakaian (kg) : "; cin >> berat;
    total = berat * tarifCuciSetrika;
    return total;
}

int main() {
    double total;
    dataPelanggan();
    tampilkanTarif();

    cout << "PILIH JENIS LAYANAN\n";
    cout << "1. Cuci Biasa\n";
    cout << "2. Cuci Setrika\n";
    cout << "Pilihan : "; cin >> pilihan;

    if (pilihan == 1)
	{
        total = hitungCuciBiasa();
    }
    else if (pilihan == 2)
	{
        total = hitungCuciSetrika();
    }
    else
	{
        cout << "error";
        return 0;
    }

    cout << endl;
    Garis();
    cout << "STRUK PEMBAYARAN LAUNDRY\n";
    Garis();
    cout << "Nama : " << nama << endl;
    cout << "No Hp : : " << hp << endl;
    
    if (pilihan == 1) 
	{
        cout << "Jenis : Cuci Biasa\n";
    }
    else 
	{
        cout << "Jenis : Cuci Setrika\n";
    }
    
    cout << "Total Biaya : Rp" << total << endl;
    Garis();
    return 0;
}

