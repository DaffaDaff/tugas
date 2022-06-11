#include "include/input.h"

using namespace std;

void input::StartMenu(database* data){
	while(1){
		int menu_terpilih;

		c_clrscr();
		cout << "Selamat datang di Universitas" << endl;
		utils::DividingLIne();
		cout << "Data Statistik:" << endl;
		cout << "  Jumlah Mahasiswa             : " << data->GetMhsVector().size() << endl;
		cout << "  Jumlah Dosen                 : " << data->GetDosenVector().size() << endl;
		cout << "  Jumlah Tenaga Kependidikan   : " << data->GetTendikVector().size() << endl;
		cout << "  Jumlah Mata Kuliah           : " << data->GetMataKuliahVector().size();
		utils::DividingLIne();
		cout << endl << "Menu: " << endl;
		cout << "  1. Tampilkan Mahasiswa" << endl;
		cout << "  2. Tampilkan Dosen" << endl;
		cout << "  3. Tampilkan Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan Mata Kuliah" << endl;
		cout << "  0. Keluar" << endl;
		cout << endl << "-> Pilih Menu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
				ShowMahasiswa(data);
				break;
			case 2:
				ShowDosen(data);
				break;
			case 3:
				ShowTendik(data);
				break;
			case 4:
				ShowMataKuliah(data);
				break;
			case 0:
				c_clrscr();
				return;
		}
	}
}


Mahasiswa* input::InputMahasiswa(string id){
	string nama, nrp;
	int dd, mm, yy, tahunMasuk, departemen, semester;

	while(1){
        c_clrscr();
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

		c_clrscr();
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

	Mahasiswa* mahasiswa = new Mahasiswa(id, nama, dd, mm, yy, nrp, departemen, tahunMasuk, semester);

	cout << mahasiswa << endl;

	c_getch();

	return mahasiswa;
}

Dosen* input::InputDosen(string id){
	string nama, npp;
	int dd, mm, yy, departemen;

	while(1){
        c_clrscr();
		cout << "Tambah Dosen Baru" << endl << endl;
		cout << "-> Masukkan Nama: ";
		cin.ignore();
		getline(cin, nama);
		cout << "-> Masukkan Tanggal Lahir(dd mm yy): ";
		cin >> dd >> mm >> yy;
		cout << "-> Masukkan NPP: ";
		cin >> npp;
		cout << endl;
		departemen = SelectDepartment();

		c_clrscr();
		cout << "Tambah Mahasiswa Baru" << endl << endl;
		cout << "Nama: " << nama << endl;
		cout << "Tanggal Lahir: " << dd << "-" << mm << "-" << yy << endl;
		cout << "NPP: " << npp << endl;
		cout << "Departemen: " << departemen << endl;
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

	Dosen* dosen = new Dosen(id, nama, dd, mm, yy, npp, departemen);
	
	return dosen;
}

Tendik* input::InputTendik(string id){
	string nama, npp, unit;
	int dd, mm, yy;

	while(1){
        c_clrscr();
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

		c_clrscr();
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
	
	Tendik* tendik = new Tendik(id, nama, dd, mm, yy, npp, unit);

	return tendik;
}

MataKuliah* input::InputMataKuliah(string id){
	string nama, kode;

	while(1){
        c_clrscr();
		cout << "Tambah Mata Kuliah Baru" << endl << endl;
		cout << "-> Masukkan Nama: ";
		cin.ignore();
		getline(cin, nama);
		cout << "-> Masukkan Kode: ";
		cin >> kode;

		c_clrscr();
		cout << "Tambah Mata Kuliah Baru" << endl << endl;
		cout << "Nama: " << nama << endl;
		cout << "Kode: " << kode << endl;
		cout << endl << "-> Apakah Data Yang Dimasukkan Sudah Benar?(Y/N) ";

		char YN;
		while(YN != 'Y' && YN != 'y' && YN != 'N' && YN != 'n')
			cin >> YN;

		if(YN == 'Y' || YN == 'y') break;
		else{
			cout << endl << "Pembuatan Mata Kuliah Baru Gagal";
			Sleep(1000);
		}
	}
    
    cout << endl << "Pembuatan Mata Kuliah Baru Berhasil" << endl;
    Sleep(1000);
	
	MataKuliah* matkul = new MataKuliah(id, nama, kode);

	return matkul;
}


void input::ShowMahasiswa(database* data){
	int page = 0;

	while(1){
		c_clrscr();

		cout << "===============DATA MAHASISWA===============" << endl << endl;
		
		PrintMahasiswa(data, page);

        if(data->GetMhsVector().size() != 0)
	        cout << endl << "Halaman " << page + 1 << endl;
       	
		cout << "6. Halaman Sebelumnya" << endl;
		cout << "7. Halaman Selanjutnya" << endl;
		cout << "8. Tambah Mahasiswa" << endl;
		cout << "0. Kembali" << endl;
		cout << endl << "-> Pilih Menu: ";

		int input;
		cin >> input;

		switch (input)
		{
		case 6:
			if(page > 0) page--;
			break;
		
		case 7:
			if(page < data->GetMhsVector().size() / 5) page++;
		
		case 8:
		{
			Mahasiswa* mahasiswa = InputMahasiswa( to_string(data->GetMhsVector().size()) );

			data->AddMhs(mahasiswa);
			data->Save();

			break;
		}
		
		case 0:
			return;

		default:
			if(input < 1 || input > 5) break;

			ShowMahasiswaData(data, input + (5 * page) - 1);

			break;
		}
	}
}

void input::ShowDosen(database* data){
	int page = 0;

	while(1){
		c_clrscr();

		cout << "===============DATA DOSEN===============" << endl << endl;

		PrintDosen(data, page);

        if(data->GetDosenVector().size() != 0)
	        cout << endl << "Halaman " << page + 1 << endl;
       	
		cout << "6. Halaman Sebelumnya" << endl;
		cout << "7. Halaman Selanjutnya" << endl;
		cout << "8. Tambah Dosen" << endl;
		cout << "0. Kembali" << endl;
		cout << endl << "-> Pilih Menu: ";

		int input;
		cin >> input;

		switch (input)
		{
		case 6:
			if(page > 0) page--;
			break;
		
		case 7:
			if(page < data->GetDosenVector().size() / 5) page++;

		case 8:
		{
			Dosen* dosen = InputDosen( to_string(data->GetDosenVector().size()) );

			data->AddDosen(dosen);
			data->Save();
			break;
		}
		
		case 0:
			return;

		default:
			if(input < 1 || input > 5) break;

			ShowDosenData(data, input + (5 * page) - 1);

			break;
		}
	}
}

void input::ShowTendik(database* data){
	int page = 0;

	while(1){
		c_clrscr();

		cout << "===============DATA TENDIK===============" << endl << endl;

		PrintTendik(data, page);

        if(data->GetTendikVector().size() != 0)
	        cout << endl << "Halaman " << page + 1 << endl;
       	
		cout << "6. Halaman Sebelumnya" << endl;
		cout << "7. Halaman Selanjutnya" << endl;
		cout << "8. Tambah Tenaga Kependidikan" << endl;
		cout << "0. Kembali" << endl;
		cout << endl << "-> Pilih Menu: ";

		int input;
		cin >> input;

		switch (input)
		{
		case 6:
			if(page > 0) page--;
			break;
		
		case 7:
			if(page < data->GetTendikVector().size() / 5) page++;

		case 8:
		{
			Tendik* tendik = InputTendik(to_string(data->GetTendikVector().size()) );

			data->AddTendik(tendik);
			data->Save();
			break;
		}
		
		case 0:
			return;

		default:
			if(input < 1 || input > 5) break;

			ShowTendikData(data, input + (5 * page) - 1);

			break;
		}
	}
}

void input::ShowMataKuliah(database* data){
	int page = 0;

	while(1){
		c_clrscr();

		cout << "===============DATA MATA KULIAH===============" << endl << endl;

		PrintMataKuliah(data, page);

        if(data->GetMataKuliahVector().size() != 0)
	        cout << endl << "Halaman " << page + 1 << endl;
       	
		cout << "6. Halaman Sebelumnya" << endl;
		cout << "7. Halaman Selanjutnya" << endl;
		cout << "8. Tambah Mata Kuliah" << endl;
		cout << "0. Kembali" << endl;
		cout << endl << "-> Pilih Menu: ";

		int input;
		cin >> input;

		switch (input)
		{
		case 6:
			if(page > 0) page--;
			break;
		
		case 7:
			if(page < data->GetMataKuliahVector().size() / 5) page++;

		case 8:
		{
			MataKuliah* matkul = InputMataKuliah(to_string(data->GetMataKuliahVector().size()) );

			data->AddMataKuliah(matkul);
			data->Save();
			break;
		}
		
		case 0:
			return;

		default:
			if(input < 1 || input > 5) break;

			ShowMataKuliahData(data, input + (5 * page) - 1);

			break;
		}
	}
}


void input::PrintMahasiswa(database* data, int page){
	for(unsigned i = 0 + (5 * page); i < 5 * (page + 1); i++){
		if(i >= data->GetMhsVector().size()) break;

		Mahasiswa* mhs = data->GetMhsVector()[i];

		cout << i + 1 - (5 * page) << ". \"";
		cout << mhs->GetNama() << "\" ";
		cout << mhs->GetNRP() << endl;
	}
}

void input::PrintDosen(database* data, int page){
	for(unsigned i = 0 + (5 * page); i < 5 * (page + 1); i++){
		if(i >= data->GetDosenVector().size()) break;

		Dosen* dosen = data->GetDosenVector()[i];

		cout << i + 1 - (5 * page) << ". \"";
		cout << dosen->GetNama() << "\" ";
		cout << dosen->GetNPP() << endl;
	}
}

void input::PrintTendik(database* data, int page){
	for(unsigned i = 0 + (5 * page); i < 5 * (page + 1); i++){
		if(i >= data->GetTendikVector().size()) break;

		Tendik* tendik = data->GetTendikVector()[i];

		cout << i + 1 - (5 * page) << ". \"";
		cout << tendik->GetNama() << "\" ";
		cout << tendik->GetNPP() << endl;
	}
}

void input::PrintMataKuliah(database* data, int page){
	for(unsigned i = 0 + (5 * page); i < 5 * (page + 1); i++){
		if(i >= data->GetMataKuliahVector().size()) break;

		MataKuliah* matkul = data->GetMataKuliahVector()[i];
		
		cout << i + 1 - (5 * page) << ". ";
		cout << matkul->GetKode() << " \"";
		cout << matkul->GetNama() << "\" " << endl;
		
	}
}

void input::PrintKelasMataKuliah(MataKuliah* data){
	for(unsigned i = 0; i < data->GetKelasVector().size(); i++){
		KelasMataKuliah* kelas = data->GetKelasVector()[i];

		cout << i << ". ";
		cout << kelas->GetKode() << " \"";
		cout << (!kelas->GetDosenVector().empty() ? kelas->GetDosenVector().front()->GetNama() : " ") << "\" ";
		cout << kelas->GetMahasiswaVector().size() << "/";
		cout << kelas->GetBatas() << endl;
	}
}


void input::ShowMahasiswaData(database* data, int index){
	Mahasiswa* mhs = data->GetMhsVector()[index];

	while(1){
		c_clrscr();
		cout << mhs << endl;
		cout << "Nama: " << mhs->GetNama() << endl;
		cout << "NRP: " << mhs->GetNRP() << endl;
		cout << "Departemen: " << departements[mhs->GetDepartemen()] << endl;
		cout << "Tanggal Lahir: " << mhs->GetTglLahir() << "-" << mhs->GetBulanLahir() << "-" << mhs->GetTahunLahir() << endl;
		cout << "Tahun Masuk: " << mhs->GetTahunMasuk() << endl;
		cout << "Semester Ke: " << mhs->GetSemester() << endl;

		cout << endl << "Opsi: " << endl;
		cout << "9. Hapus Data" << endl;
		cout << "0. Kembali" << endl;

		int input;
		cout << endl << "-> Pilih Opsi: ";
		cin >> input;
		switch (input)
		{
		case 9:
			cout << endl << "-> Apakah Anda Yakin Ingin Menghapus Data Ini?(Y/N) ";

            char YN;
            cin >> YN;

            if(YN != 'Y' && YN != 'y') break;

			data->GetMhsVector().erase(data->GetMhsVector().begin() + index);

			data->SaveMahasiswa();
			data->LoadMahasiwa();

			c_clrscr();
 
            cout << "Data Berhasil Dihapus" << endl << endl;
            cout << "Klik Untuk Melanjutkan";

            c_getch();

			return;

		case 0:
			return;
			
		default:
			break;
		}			
	}
}

void input::ShowDosenData(database* data, int index){
	Dosen *dosen = data->GetDosenVector()[index];

	while(1){
		c_clrscr();
		cout << "Nama: " << dosen->GetNama() << endl;
		cout << "NPP: " << dosen->GetNPP() << endl;
		cout << "Departemen: " << departements[dosen->GetDepartemen()] << endl;
		cout << "Tanggal Lahir: " << dosen->GetTglLahir() << "-" << dosen->GetBulanLahir() << "-" << dosen->GetTahunLahir() << endl;

		
		cout << endl << "Opsi: " << endl;
		cout << "9. Hapus Data" << endl;
		cout << "0. Kembali" << endl;

		int input;
		cout << endl << "-> Pilih Opsi: ";
		cin >> input;
		switch (input)
		{
		case 9:
			cout << endl << "-> Apakah Anda Yakin Ingin Menghapus Data Ini?(Y/N) ";

            char YN;
            cin >> YN;

            if(YN != 'Y' && YN != 'y') break;

			data->GetDosenVector().erase(data->GetDosenVector().begin() + index);

			data->SaveDosen();
			data->LoadDosen();

			c_clrscr();
 
            cout << "Data Berhasil Dihapus" << endl << endl;
            cout << "Klik Untuk Melanjutkan";

            c_getch();

			return;

		case 0:
			return;
			
		default:
			break;
		}
	}
}

void input::ShowTendikData(database* data, int index){
	Tendik *tendik = data->GetTendikVector()[index];

	while(1){
		c_clrscr();
		cout << "Nama: " << tendik->GetNama() << endl;
		cout << "NPP: " << tendik->GetNPP() << endl;
		cout << "Departemen: " << tendik->GetUnit() << endl;
		cout << "Tanggal Lahir: " << tendik->GetTglLahir() << "-" << tendik->GetBulanLahir() << "-" << tendik->GetTahunLahir() << endl;

		
		cout << endl << "Opsi: " << endl;
		cout << "9. Hapus Data" << endl;
		cout << "0. Kembali" << endl;

		int input;
		cout << endl << "-> Pilih Opsi: ";
		cin >> input;
		switch (input)
		{
		case 9:
			cout << endl << "-> Apakah Anda Yakin Ingin Menghapus Data Ini?(Y/N) ";

            char YN;
            cin >> YN;

            if(YN != 'Y' && YN != 'y') break;

			data->GetTendikVector().erase(data->GetTendikVector().begin() + index);

			data->SaveTendik();
			data->LoadTendik();

			c_clrscr();
 
            cout << "Data Berhasil Dihapus" << endl << endl;
            cout << "Klik Untuk Melanjutkan";

            c_getch();

			return;

		case 0:
			return;
			
		default:
			break;
		}
	}
}

void input::ShowMataKuliahData(database* data, int index){ 
	MataKuliah *matkul = data->GetMataKuliahVector()[index];

	while(1){
		c_clrscr();
		cout << "Nama: " << matkul->GetNama() << endl;
		cout << "NPP: " << matkul->GetKode() << endl;
		
		cout << endl << "Opsi: " << endl;
		cout << "1. Tampilkan Kelas" << endl;
		cout << "2. Buat Kelas Baru" << endl;
		cout << "9. Hapus Data" << endl;
		cout << "0. Kembali" << endl;

		int input;
		cout << endl << "-> Pilih Opsi: ";
		cin >> input;
		switch (input)
		{
		case 1:
			c_clrscr();

			PrintKelasMataKuliah(matkul);

			cout << endl << "Klik Untuk Kembali";
			c_getch();

			break;

		case 2:
			c_clrscr();

			int batas;

			cout << "->Tentukan Batas Mahasiswa ";
			cin >> batas;

			matkul->GenerateKelas(batas);

			cout << endl << "Pembuatan Kelas Baru Berhasil" << endl;
    		Sleep(1000);

			break;

		case 9:
			cout << endl << "-> Apakah Anda Yakin Ingin Menghapus Data Ini?(Y/N) ";

            char YN;
            cin >> YN;

            if(YN != 'Y' && YN != 'y') break;

			data->GetMataKuliahVector().erase(data->GetMataKuliahVector().begin() + index);

			data->SaveMataKuliah();
			data->LoadMataKuliah();

			c_clrscr();
 
            cout << "Data Berhasil Dihapus" << endl << endl;
            cout << "Klik Untuk Melanjutkan";

            c_getch();

			return;

		case 0:
			return;
			
		default:
			break;
		}
	}
}


int input::SelectDepartment(){
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

		return departmentSelection;;
	}
}