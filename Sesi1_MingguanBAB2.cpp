#include <iostream>
#include <string>
using namespace std;

// Halo, ini Tugas Mingguan Bab 2 saya dalam C++
int main() {
// Data Space
string NamaMahasiswa,Kelas;
int Nim, Semester;
double Ipk;

cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n";
cout << "PENDATA ITN MALANG \n";
cout << "\n";

cout << "Nama Mahasiswa = ";
getline (cin, NamaMahasiswa);
cout << "Nim Mahasiswa = ";
cin >> Nim;
cout << "Kelas Mahasiswa = ";
cin >> Kelas;
cout << "IPK Mahasiswa = ";
cin >> Ipk;
   if (Ipk > 4.0 || Ipk < 0);
      cout << "IPK tidak valid, Harus Antara 4.0 dan 0, Input IPK Ulang = ";
      cin >> Ipk;
cout << "Semester Mahasiswa = ";
cin >> Semester;

cout << "\n";
cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n";
cout << "\n";
cout << "DATABASE ITN MALANG \n";
cout << "\n";

cout << "Nama Mahasiswa = " << NamaMahasiswa <<endl;
cout << "Nim Mahasiswa = " << Nim << endl;
cout << "Kelas Mahasiswa = " << Kelas << endl;
cout << "IPK Mahasiswa = " << Ipk << endl;
cout << "Semester Mahasiswa = " << Semester << endl;
cout << "\n";
cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- \n";

    return 0;
}


