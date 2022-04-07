#include <iostream>
#include <vector>
#include <string>

#include "include/database.h"
#include "include/person.h"
#include "include/mahasiswa.h"
#include "include/dosen.h"
#include "include/tendik.h"

using namespace std;

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
		cin >> departmentSelection;

		return (departements)departmentSelection;;
	}
}

mahasiswa AddMahasiswa(){
	string nama, nrp;
	int dd, mm, yy, tahunMasuk, departemenSelection;
	departements departemen;

	while(1){
		system("clear");
		system("CLS");
		cout << "Masukkan Nama: ";
		cin >> nama;
		cout << endl << "Masukkan Tanggal Lahir(dd mm yy): ";
		cin >> dd >> mm >> yy;
		cout << endl << "Pilih Departemen:" << endl;
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

dosen AddDosen(){

}

tendik AddTendik(){

}

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	database* dat = new database(recMhs, recDosen, recTendik);

	int menu_terpilih;

	system("clear");
	system("CLS");

	while(1) {
		cout << "Selamat datang di Universitas X" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
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
				recMhs.push_back(AddMahasiswa());
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