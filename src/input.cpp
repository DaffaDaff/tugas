#include <windows.h>

#include "include/input.h"

using namespace std;

void input::StartMenu(database* data){
	int menu_terpilih;

    utils::ClearScreen();
	cout << "Selamat datang di Universitas" << endl;
	utils::DividingLIne();
	cout << "Data Statistik:" << endl;
	cout << "  1. Jumlah Mahasiswa             : " << data->GetMhsVector().size() << endl;
	cout << "  2. Jumlah Dosen                 : " << data->GetDosenVector().size() << endl;
	cout << "  3. Jumlah Tenaga Kependidikan   : " << data->GetTendikVector().size();
	utils::DividingLIne();
	cout << endl << "Menu: " << endl;
	cout << "  1. Tambah Mahasiswa" << endl;
	cout << "  2. Tambah Dosen" << endl;
	cout << "  3. Tambah Tenaga Kependidikan" << endl;
	cout << "  4. Tampilkan semua Mahasiswa" << endl;
	cout << "  5. Tampilkan semua Dosen" << endl;
	cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
	cout << endl << "-> Pilih Menu: ";
	cin >> menu_terpilih;

	switch (menu_terpilih) {
		case 1:
			data->AddMhs(input::InputMahasiswa( to_string(data->GetMhsVector().size()) ));
			data->Save();
			break;
		case 2:
			data->AddDosen(input::InputDosen( to_string(data->GetDosenVector().size()) ));
			data->Save();
			break;
		case 3:
			data->AddTendik(input::InputTendik(to_string(data->GetTendikVector().size()) ));
			data->Save();
			break;
		case 4:
            ShowMahasiswa(data);
			break;
		case 5:
			ShowDosen(data);
			break;
		case 6:
			ShowTendik(data);
			break;
	}
}

mahasiswa input::InputMahasiswa(string id){
	string nama, nrp;
	int dd, mm, yy, tahunMasuk, departemenSelection, semester;
	departements departemen;

	while(1){
        utils::ClearScreen();
		cout << "Tambah Mahasiswa Baru" << endl << endl;
		cout << "-> Masukkan Nama: ";
		cin.ignore();
		getline(cin, nama);
		cout << "-> Masukkan Tanggal Lahir(dd mm yy): ";
		cin >> dd >> mm >> yy;
		cout << "-> Masukkan NRP: ";
		cin >> nrp;
		cout << endl;
		departemen = SelectDepartment();
		cout << "-> Masukkan Tahun Masuk: ";
		cin >> tahunMasuk;
		cout << "-> Masukkan Semester Yang Sedang Dijalani: ";
		cin >> semester;

		utils::ClearScreen();
		cout << "Tambah Dosen Baru" << endl << endl;
		cout << "Nama: " << nama << endl;
		cout << "Tanggal Lahir: " << dd << "-" << mm << "-" << yy << endl;
		cout << "NRP: " << nrp << endl;
		cout << "Departemen: " << departemen << endl;
		cout << "Tahun Masuk: " << tahunMasuk << endl;
		cout << "Semester Ke: " << semester << endl;
		cout << endl << "-> Apakah Data Yang Dimasukkan Sudah Benar?(Y/N) ";

		char YN;
		while(YN != 'Y' && YN != 'y' && YN != 'N' && YN != 'n')
			cin >> YN;

		if(YN == 'Y' || YN == 'y') break;
		else{
			cout << endl << "Pembuatan Mahasiswa Baru Gagal";
			Sleep(1000);
		}
	}
    
    cout << endl << "Pembuatan Mahasiswa Baru Berhasil" << endl;
    Sleep(1000);

	return mahasiswa(id, nama, dd, mm, yy, nrp, departemen, tahunMasuk, semester);
}

dosen input::InputDosen(string id){
	string nama, npp;
	int dd, mm, yy, departmentSelection;
	departements departement;

	while(1){
        utils::ClearScreen();
		cout << "Tambah Dosen Baru" << endl << endl;
		cout << "-> Masukkan Nama: ";
		cin.ignore();
		getline(cin, nama);
		cout << "-> Masukkan Tanggal Lahir(dd mm yy): ";
		cin >> dd >> mm >> yy;
		cout << "-> Masukkan NPP: ";
		cin >> npp;
		cout << endl;
		departement = SelectDepartment();

		utils::ClearScreen();
		cout << "Tambah Mahasiswa Baru" << endl << endl;
		cout << "Nama: " << nama << endl;
		cout << "Tanggal Lahir: " << dd << "-" << mm << "-" << yy << endl;
		cout << "NPP: " << npp << endl;
		cout << "Departemen: " << departement << endl;
		cout << endl << "-> Apakah Data Yang Dimasukkan Sudah Benar?(Y/N) ";

		char YN;
		while(YN != 'Y' && YN != 'y' && YN != 'N' && YN != 'n')
			cin >> YN;

		if(YN == 'Y' || YN == 'y') break;
		else{
			cout << endl << "Pembuatan Dosen Baru Gagal";
			Sleep(1000);
		}
	}
    
    cout << endl << "Pembuatan Dosen Baru Berhasil" << endl;
    Sleep(1000);
	
	return dosen(id, nama, dd, mm, yy, npp, departement);
}

tendik input::InputTendik(string id){
	string nama, npp, unit;
	int dd, mm, yy;

	while(1){
        utils::ClearScreen();
		cout << "Tambah Tendik Baru" << endl << endl;
		cout << "-> Masukkan Nama: ";
		cin.ignore();
		getline(cin, nama);
		cout << "-> Masukkan Tanggal Lahir(dd mm yy): ";
		cin >> dd >> mm >> yy;
		cout << "-> Masukkan NPP: ";
		cin >> npp;
		cout << "-> Masukkan Unit: ";
		cin.ignore();
		getline(cin, unit);

		utils::ClearScreen();
		cout << "Tambah Tendik Baru" << endl << endl;
		cout << "Nama: " << nama << endl;
		cout << "Tanggal Lahir: " << dd << "-" << mm << "-" << yy << endl;
		cout << "NPP: " << npp << endl;
		cout << "Unit: " << unit << endl;
		cout << endl << "-> Apakah Data Yang Dimasukkan Sudah Benar?(Y/N) ";

		char YN;
		while(YN != 'Y' && YN != 'y' && YN != 'N' && YN != 'n')
			cin >> YN;

		if(YN == 'Y' || YN == 'y') break;
		else{
			cout << endl << "Pembuatan Tendik Baru Gagal";
			Sleep(1000);
		}
	}
    
    cout << endl << "Pembuatan Tendik Baru Berhasil" << endl;
    Sleep(1000);
	
	return tendik(id, nama, dd, mm, yy, npp, unit);
}

void input::ShowMahasiswa(database* data){
	while(1){
		utils::ClearScreen();

		cout << "===============DATA MAHASISWA===============";
		int i;
		for(i = 0; i < data->GetMhsVector().size(); i++){
			cout << i + 1 << ".  ";
			cout << data->GetMhsVector()[i].GetNama() << "  ";
			cout << data->GetMhsVector()[i].GetNRP() << endl;
		}

		cout << "0. Keluar" << endl;
		cout << endl << "-> Pilih Mahasiswa: ";

		int input;
		commands output = null;
		cin >> input;
		if(input == 0) return;
		if(input <= i && input > 0)
			output = ShowMahasiswaData(&data->GetMhsVector()[input - 1]);

		switch (output)
		{
		case commands::close:
			return;
			break;
		
		case commands::erase:
			data->EraseMhsVector(input - 1);
			data->Save();
			break;

		default:
			break;
		}
	}
}

void input::ShowDosen(database* data){
	while(1){
		utils::ClearScreen();

		cout << "===============DATA DOSEN===============";
		int i;
		for(i = 0; i < data->GetDosenVector().size(); i++){
			cout << i + 1 << ".  ";
			cout << data->GetDosenVector()[i].GetNama() << "  ";
			cout << data->GetDosenVector()[i].GetNPP() << endl;
		}

		cout << "0. Keluar" << endl;
		cout << endl << "-> Pilih Dosen: ";

		int input;
		commands output = null;
		cin >> input;
		if(input == 0) return;
		if(input <= i && input > 0)
			output = ShowDosenData(&data->GetDosenVector()[input - 1]);

		switch (output)
		{
		case commands::close:
			return;
			break;
		
		case commands::erase:
			data->EraseDosenVector(input - 1);
			data->Save();
			break;

		default:
			break;
		}
	}
}

void input:: ShowTendik(database* data){
	while(1){
		utils::ClearScreen();

		cout << "===============DATA TENDIK===============";
		int i;
		for(i = 0; i < data->GetTendikVector().size(); i++){
			cout << i + 1 << ".  ";
			cout << data->GetTendikVector()[i].GetNama() << "  ";
			cout << data->GetTendikVector()[i].GetNPP() << endl;
		}

		cout << "0. Keluar" << endl;
		cout << endl << "-> Pilih Tendik: ";

		int input;
		commands output = null;
		cin >> input;
		if(input == 0) return;
		if(input <= i && input > 0)
			output = ShowTendikData(&data->GetTendikVector()[input - 1]);

		switch (output)
		{
		case commands::close:
			return;
			break;
		
		case commands::erase:
			data->EraseTendikVector(input - 1);
			data->Save();
			break;

		default:
			break;
		}
	}
}

commands input::ShowMahasiswaData(mahasiswa* _mahasiswa){
	while(1){
		utils::ClearScreen();
		cout << "Nama: " << _mahasiswa->GetNama() << endl;
		cout << "NRP: " << _mahasiswa->GetNRP() << endl;
		cout << "Departemen: " << departementsStr[_mahasiswa->GetDepartemen()] << endl;
		cout << "Tanggal Lahir: " << _mahasiswa->GetTglLahir() << "-" << _mahasiswa->GetBulanLahir() << "-" << _mahasiswa->GetTahunLahir() << endl;
		cout << "Tahun Masuk: " << _mahasiswa->GetTahunMasuk() << endl;
		cout << "Semester Ke: " << _mahasiswa->GetSemester() << endl;

		
		cout << endl << "Opsi: " << endl;
		cout << "1. Hapus Data" << endl;
		cout << "9. Kembali" << endl;
		cout << "0. Keluar" << endl;

		while(1){
			int opsi;
			cout << endl << "-> Pilih Opsi: ";
			cin >> opsi;
			switch (opsi)
			{
			case 1:
				cout << endl << "-> Apakah Anda Yakin Ingin Menghapus Data Ini?(Y/N) ";

				char YN;
				while(YN != 'Y' && YN != 'y' && YN != 'N' && YN != 'n')
					cin >> YN;

				if(YN == 'N' || YN == 'n') break;
				else
					return commands::erase;

				break;

			case 9:
				return commands::null;
			
			case 0:
				return commands::close;
				break;
			
			default:
				break;
			}
		}
	}
}

commands input::ShowDosenData(dosen* _dosen){
	while(1){
		utils::ClearScreen();
		cout << "Nama: " << _dosen->GetNama() << endl;
		cout << "NPP: " << _dosen->GetNPP() << endl;
		cout << "Departemen: " << departementsStr[_dosen->GetDepartemen()] << endl;
		cout << "Tanggal Lahir: " << _dosen->GetTglLahir() << "-" << _dosen->GetBulanLahir() << "-" << _dosen->GetTahunLahir() << endl;

		
		cout << endl << "Opsi: " << endl;
		cout << "1. Hapus Data" << endl;
		cout << "9. Kembali" << endl;
		cout << "0. Keluar" << endl;

		while(1){
			int opsi;
			cout << endl << "-> Pilih Opsi: ";
			cin >> opsi;
			switch (opsi)
			{
			case 1:
				cout << endl << "-> Apakah Anda Yakin Ingin Menghapus Data Ini?(Y/N) ";

				char YN;
				while(YN != 'Y' && YN != 'y' && YN != 'N' && YN != 'n')
					cin >> YN;

				if(YN == 'N' || YN == 'n') break;
				else
					return commands::erase;

				break;

			case 9:
				return commands::null;
			
			case 0:
				return commands::close;
				break;
			
			default:
				break;
			}
		}
	}
}

commands input::ShowTendikData(tendik* _tendik){
	while(1){
		utils::ClearScreen();
		cout << "Nama: " << _tendik->GetNama() << endl;
		cout << "NPP: " << _tendik->GetNPP() << endl;
		cout << "Departemen: " << _tendik->GetUnit() << endl;
		cout << "Tanggal Lahir: " << _tendik->GetTglLahir() << "-" << _tendik->GetBulanLahir() << "-" << _tendik->GetTahunLahir() << endl;

		
		cout << endl << "Opsi: " << endl;
		cout << "1. Hapus Data" << endl;
		cout << "9. Kembali" << endl;
		cout << "0. Keluar" << endl;

		while(1){
			int opsi;
			cout << endl << "-> Pilih Opsi: ";
			cin >> opsi;
			switch (opsi)
			{
			case 1:
				cout << endl << "-> Apakah Anda Yakin Ingin Menghapus Data Ini?(Y/N) ";

				char YN;
				while(YN != 'Y' && YN != 'y' && YN != 'N' && YN != 'n')
					cin >> YN;

				if(YN == 'N' || YN == 'n') break;
				else
					return commands::erase;

				break;

			case 9:
				return commands::null;
			
			case 0:
				return commands::close;
				break;
			
			default:
				break;
			}
		}
	}
}

departements input::SelectDepartment(){
	while(1){
		int departmentSelection;

		cout << "1. Fisika" << endl;
		cout << "2. Matematika" << endl;
		cout << "3. Statistika" << endl;
		cout << "4. Kimia" << endl;
		cout << "5. Biologi" << endl;
		cout << "6. Aktuaria" << endl;
		cout << "7. Teknik Pekapalan" << endl;
		cout << "8. Teknik Sistem Perkapalan" << endl;
		cout << "9. Teknik Kelautan" << endl;
		cout << "10. Teknik Transportasi Laut" << endl;
		cout << "11. Teknik Mesin" << endl;
		cout << "12. Teknik Fisika" << endl;
		cout << "13. Teknik Sistem dan Industri" << endl;
		cout << "14. Teknik Material" << endl;
		cout << "15. Teknik Elektro" << endl;
		cout << "16. Teknik Biomedik" << endl;
		cout << "17. Teknik Komputer" << endl;
		cout << "18. Teknik Informatika" << endl;
		cout << "19. Sistem Informasi" << endl;
		cout << "20. Teknologi Informasi" << endl;
		cout << "21. Teknik Sipil " << endl;
		cout << "22. Arsitektur" << endl;
		cout << "23. Teknik Lingkungan" << endl;
		cout << "24. Perencanaan Wilayah dan Kota" << endl;
		cout << "25. Teknik Geomatika" << endl;
		cout << "26. Teknik Geofisika" << endl;
		cout << "27. Desain Produk Industri" << endl;
		cout << "28. Desain Interior" << endl;
		cout << "29. Desain Komunikasi Visual" << endl;
		cout << "30. Manajemen Bisnis" << endl;
		cout << "31. Studi Pembangunan" << endl;
		cout << "32. Manajemen Teknologi" << endl;
		cout << "33. Teknik Infrastruktur Sipil" << endl;
		cout << "34. Teknik Mesin Industri" << endl;
		cout << "35. Teknik Elektro Otomasi" << endl;
		cout << "36. Teknik Kimia Industri" << endl;
		cout << "37. Teknik Instrumentasi" << endl;
		cout << "38. Statistika Bisnis" << endl;
		cout << endl << endl << "Pilih Departemen: ";
		cin >> departmentSelection;

		departmentSelection--;

		return (departements)departmentSelection;;
	}
}