#include <iostream>
using namespace std;
// halo!, Ini projek saya untuk Praktikum Algoritma!
// saya mengerjakan tugas saya disini!
int main (){
// data space
string NamaSiswa;
int JumblahMakanan,HargaMakanan,JumblahMinuman,HargaMinuman,TotalMakanan,TotalMinuman,TotalALL;

//ui interface
cout << "---------------------------------------------" <<endl;
cout << "Data Pembelian Kantin ITN Malang!" << endl;
cout << "Nama pembeli adalah = " << endl;
cin >> NamaSiswa; 
cout << "Nama anda adalah = " <<NamaSiswa << endl;
cout << "input jumblah makanan!" << endl;
cin >> JumblahMakanan;
cout << "imput harga makanan" << endl;
cin >> HargaMakanan;
cout << "input jumblah minuman" <<endl;
cin >> JumblahMinuman;
cout << "input harga minuman" <<endl;
cin >> HargaMinuman;
cout << "---------------------------------------------" << endl;

//area perhitungan
TotalMakanan = JumblahMakanan * HargaMakanan;
TotalMinuman = JumblahMinuman * HargaMinuman;
TotalALL = TotalMakanan + TotalMinuman;
//output
cout << "---------------------------------------------" << endl;
cout <<"Nama = " << NamaSiswa << endl;
cout <<"total belanja Makanan = " << TotalMakanan << endl;
cout <<"total belanja Minuman = " << TotalMinuman << endl;
cout <<"Total belanja Makan dan Minum = " << TotalALL << endl;
cout << "---------------------------------------------" << endl;

return 0;
}

