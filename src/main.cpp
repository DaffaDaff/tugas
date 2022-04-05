#include <iostream>
#include <vector>
#include <string>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

mahasiswa AddMahasiswa(int id){
	string nama, nrp, departemen;
	int dd, mm, yy, tahunMasuk;

	while(1){
		system("clear");
		cout << "Masukkan Nama: ";
		cin >> nama;
		cout << endl << "Masukkan Tanggal Lahir(dd mm yy): ";
		cin >> dd >> mm >> yy;
		cout << endl << "Masukkan Departemen: ";
		cin >> departemen;
		cout << endl << "Masukkan Tahun Masuk: ";
		cin >> tahunMasuk;

		cout << endl << endl;
		cout << "Nama: " << nama << endl;
		cout << "Tanggal Lahir: " << dd << "-" << mm << "-" << yy << endl;
		cout << "Departemen: " << departemen << endl;
		cout << "Tahun Masuk: " << tahunMasuk << endl;
		cout << endl << "Apakah Data Yang Dimasukkan Sudah Benar?(Y/N)" << endl;

		char YN;
		while(YN != 'Y' && YN != 'y' && YN != 'N' && YN != 'n')
			cin >> YN;

		if(YN == 'Y' || YN == 'y') break;
	}

	return mahasiswa(to_string(id), nama, dd, mm, yy, nrp, departemen, tahunMasuk);
}

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	system("clear");

	while(1) {
		

		cout << "Selamat datang di Universitas X" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
				recMhs.push_back(AddMahasiswa(recMhs.size()));
				system("clear");
				cout << "Pembuatan Mahasiswa Baru Berhasil" << endl << endl;
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
		}
	}

	return 0;
}

