#include <iostream>
using namespace std;

int main (){
int C,R,K,F;

cout << "Selamat datang di aplikasi konversi suhu! \n";
cout << "Masukkan suhu yang ingin diubah : ";
cin >> C;

K = C + 273;
R = C * 4 / 5;
F = C *(9 / 5) + 32;

cout << "Celsius = " << C << endl;
cout << "Kelvin = " << K << endl;
cout << "Reamur = " << R << endl;
cout << "Farenheit = " << F << endl;
cout << "\n";
cout << "Suhu Telah Dikonversi!";
return 0;
}

