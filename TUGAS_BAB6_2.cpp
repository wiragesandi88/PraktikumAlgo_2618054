#include <iostream>
using namespace std;

int main (){
	int angka;
	int a = 1;
	int total = 0;
	cout << "Program Penjumblahan Deretan! \n";
	cout << "Jumblah Deret Yang Diinginkan : "; cin >> angka;
	
	while (a <=	angka){
		cout << a << " + ";
		total = total + a;
		a++;
	}
	cout << "\n";
	cout << "Hasil Penjumblahan Deret: " << total;

return 0;
}

