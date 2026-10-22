#include <iostream>
#include <string>
using namespace std;

int main (){
string nama;
int nim,tang,pend;
double tarif;
//main menu!!
cout << "+++ PROGRAM PENDAPATAN PAJAK +++\n";
cout << "Input nama anda! = ";
getline (cin, nama);
cout << "Input NIM anda! = ";
cin >> nim;
cout << "\n";
cout << "\tDATA PENDAPATAN";
cout << "\n";
cout << "Pendapatan Bulanan = Rp. ";
cin >> pend;
if (pend < 0){
	cout << "error, pendapatan negatif.";
}
cout << "Memiliki Tanggungan? (1 = Ya, 0 = Tidak) :";
cin >> tang;
if (tang == 1){
	pend -= 100000;
}else if (tang == 0){
	cout << "Tidak ada pemotongan." << endl;
}else{
	cout << "input tidak valid." <<endl;
}
//perhitungan penaikan pajak!!
if (pend >= 20000000){
	tarif = 0.15;
}else if (pend >= 10000000){
	tarif = 0.10;
}else if (pend >= 5000000){
	tarif = 0.05;
}else {
	tarif = 0;
}

int tarif2 = pend * tarif;
int pajak = pend - tarif2;

cout << "Tarif Pajak = " << tarif * 100 << "%" << endl;
cout << "Pajak Akhir = Rp. " << pajak;
return 0;
}

