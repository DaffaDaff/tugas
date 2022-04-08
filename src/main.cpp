#include <iostream>
#include <vector>
#include <string>

#include "include/database.h"
#include "include/person.h"
#include "include/mahasiswa.h"
#include "include/dosen.h"
#include "include/tendik.h"

using namespace std;

database* dat = new database();

mahasiswa InputMahasiswa();
dosen InputDosen();
tendik InputTendik();
departements SelectDepartment();

int main()
{
	int menu_terpilih;

	system("clear");
	system("CLS");

	while(1) {
		cout << "Selamat datang di Universitas X" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << dat->GetRecMhs().size() << endl;
		cout << "  2. Jumlah Dosen                 : " << dat->GetRecDosen().size() << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << dat->GetRecTendik().size() << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		//cout << "  2. Tambah Dosen" << endl;
		//cout << "  3. Tambah Tenaga Kependidikan" << endl;
		//cout << "  4. Tampilkan semua Mahasiswa" << endl;
		//cout << "  5. Tampilkan semua Dosen" << endl;
		//cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
				dat->AddMhs(InputMahasiswa());
				dat->Save();
				system("clear");
				system("CLS");
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

mahasiswa InputMahasiswa(){
	string nama, nrp;
	int dd, mm, yy, tahunMasuk, departemenSelection;
	departements departemen;

	while(1){
		system("clear");
		system("CLS");
		cout << "Masukkan Nama: ";
		cin.ignore();
		getline(cin, nama);
		cout << endl << "Masukkan Tanggal Lahir(dd mm yy): ";
		cin >> dd >> mm >> yy;
		cout << "Masukkan NRP: ";
		cin >> nrp;
		cout << endl;
		departemen = SelectDepartment();
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

	return mahasiswa("000", nama, dd, mm, yy, nrp, departemen, tahunMasuk);
}

dosen InputDosen(){

}

tendik InputTendik(){

}

departements SelectDepartment(){
	while(1){
		int departmentSelection;

		cout << "1 Fisika" << endl;
		cout << "2 Matematika" << endl;
		cout << "3 Statistika" << endl;
		cout << "4 Kimia" << endl;
		cout << "5 Biologi" << endl;
		cout << "6 Aktuaria" << endl;
		cout << "7 Teknik Pekapalan" << endl;
		cout << "8 Teknik Sistem Perkapalan" << endl;
		cout << "9 Teknik Kelautan" << endl;
		cout << "10 Teknik Transportasi Laut" << endl;
		cout << "11 Teknik Mesin" << endl;
		cout << "12Teknik Fisika" << endl;
		cout << "13 Teknik Sistem dan Industri" << endl;
		cout << "14 Teknik Material" << endl;
		cout << "15 Teknik Elektro" << endl;
		cout << "16 Teknik Biomedik" << endl;
		cout << "17 Teknik Komputer" << endl;
		cout << "18 Teknik Informatika" << endl;
		cout << "19 Sistem Informasi" << endl;
		cout << "20 Teknologi Informasi" << endl;
		cout << "21 Teknik Sipil " << endl;
		cout << "22 Arsitektur" << endl;
		cout << "23 Teknik Lingkungan" << endl;
		cout << "24 Perencanaan Wilayah dan Kota" << endl;
		cout << "25 Teknik Geomatika" << endl;
		cout << "26 Teknik Geofisika" << endl;
		cout << "27 Desain Produk Industri" << endl;
		cout << "28 Desain Interior" << endl;
		cout << "29 Desain Komunikasi Visual" << endl;
		cout << "30 Manajemen Bisnis" << endl;
		cout << "31 Studi Pembangunan" << endl;
		cout << "32 Manajemen Teknologi" << endl;
		cout << "33 Teknik Infrastruktur Sipil" << endl;
		cout << "34 Teknik Mesin Industri" << endl;
		cout << "35 Teknik Elektro Otomasi" << endl;
		cout << "36 Teknik Kimia Industri" << endl;
		cout << "37 Teknik Instrumentasi" << endl;
		cout << "38 Statistika Bisnis" << endl;
		cout << endl << endl << "Pilih Departemen:";
		cin >> departmentSelection;

		departmentSelection--;

		return (departements)departmentSelection;;
	}
}