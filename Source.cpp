#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct Aktor
{
	string Nama;
	int TahunLahir;
};

struct Film
{
	string Judul;
	string Genre;
	int Tahun;

	/* Struct Aktor */
	Aktor PemeranUtama;
	Aktor Figuran;
};

int main()
{
	Aktor Aktor1, Aktor2;
	Film Film1;

	/* Buat Aktor 1 */
	Aktor1.Nama = "Rizky Khapidsyah";
	Aktor1.TahunLahir = 1991;

	/* Buat Aktor 2 */
	Aktor2.Nama = "Michael Mesm";
	Aktor2.TahunLahir = 2018;

	/* Buat Film */
	Film1.Judul = "Horror in Medan";
	Film1.Genre = "Horror";
	Film1.Tahun = 2031;
	Film1.PemeranUtama = Aktor1;
	Film1.Figuran = Aktor2;

	/* Output */
	cout << "=============================================" << endl;
	cout << "CONTOH 1" << endl;
	cout << "=============================================" << endl;
	cout << "Judul Film             : " << Film1.Judul << endl;
	cout << "Genre Film             : " << Film1.Genre << endl;
	cout << "Tahun Film             : " << Film1.Tahun << endl;
	cout << "Pemeran 1              : " << Film1.PemeranUtama.Nama << endl;
	cout << "Tahun Lahir Pemeran 1  : " << Film1.PemeranUtama.TahunLahir << endl;
	cout << "Pemeran 2              : " << Film1.Figuran.Nama << endl;
	cout << "Tahun Lahir Pemeran 2  : " << Film1.Figuran.TahunLahir << endl;

	_getch();
	return 0;
}