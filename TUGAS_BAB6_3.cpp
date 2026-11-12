#include <iostream>
using namespace std;

int main (){
	bool kalah = false;
	int jawab, hasil;
	int lvl = 1;
	
	cout << "===== PROGRAM MINIGAME MATEMATIKA ===== \n";
	cout << "\n";
	
	do {
		hasil = lvl +	(lvl * 5);
		
		cout << "===== LEVEL " << lvl << " =====" << endl;
		cout << lvl << " + ( " << lvl << " x 5) = "; cin >> jawab;
		
		if (jawab == hasil){
			cout << "Correct! :D " << endl;
			cout << "\n";
			lvl++;
		}else{
			cout << "Wrong!!! >:C " << endl;
			cout << "Game over.. You Lose! :(  " <<endl;
			break;
		}
	}while (lvl <= 6);
	{
		cout << "You won, congrats :) " <<endl;
    }
return 0;
}

