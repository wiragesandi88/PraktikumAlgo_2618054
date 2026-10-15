#include <iostream>
using namespace std;

int main (){
double phi = 3.14;
int jari, tinggi, LuasLing, VolTab;

cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n";
cout << "Aplikasi Perhitungan Tabung!! \n";
cout << "Input data Jari Jari dan Tinggi! \n";
cout << "Jari Jari Lingkaran = ";
cin >> jari;
cout << "Tinggi Tabung = ";
cin >> tinggi;
cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n";
LuasLing = phi * (jari * jari);
VolTab = tinggi * LuasLing;
cout << "\n";
cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n";
cout << "Volume tabung adalah = " << VolTab <<endl;
return 0;
}

