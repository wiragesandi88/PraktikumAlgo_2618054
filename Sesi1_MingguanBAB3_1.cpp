#include <iostream>
using namespace std;

int main (){
int UTS, UAS; //NILAI KEDUA INI MENGGUNAKAN KEDUA NOMOR AKHIR NIM KAKAK ASLAB DAN NIM PELAJAR, UTS = 54, UAS = 65
cout << "PENDATAAN ITN MALANG KELULUSAN SISWA \n";
cout << "Masukan Data Hasil UTS DAN UAS \n";
cout << "\n";
cout << "Masukkan Nilai UTS! ";
cin >> UTS;
cout << "Masukkan Nilai UAS! ";
cin >> UAS;
if (UTS >= 60 && UAS >= 60){
	cout << "Selamat, Kamu LULUS!";
}
else {
	cout << "Kamu Gagal.";
}
return 0;
}

