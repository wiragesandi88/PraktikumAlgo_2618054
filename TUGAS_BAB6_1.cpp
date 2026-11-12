#include <iostream>
using namespace std;

int main (){
	int angka;
	int fakt = 1;
	
	cout << "PROGRAM FAKTORIAL!!" << endl;
	cout << "Masukkan angka : "; cin >> angka;
	cout << angka << "! = ";
	
	for (int a = angka; a >= 1; a--){
		fakt = fakt * a;
		cout << a;
		
		if (a > 1){
			cout <<	" x ";
		}
	}
	
	cout << " = " << fakt << endl;
	cout << endl;
	cout << "Hasil faktorial " << angka << "! adalah = " << fakt << "!!" << endl;
return 0;
}

