#ifndef __PERSON_CLASS
#define __PERSON_CLASS
#pragma once

#include <iostream>

enum departements{
	Fisika,
	Matematika,
	Statistika,
	Kimia,
	Biologi,
	Aktuaria,
	Teknik_Pekapalan,
	Teknik_Sistem_Perkapalan,
	Teknik_Kelautan,
	Teknik_Transportasi_Laut,
	Teknik_Mesin,
	Teknik_Fisika,
	Teknik_Sistem_dan_Industri,
	Teknik_Material,
	Teknik_Elektro,
	Teknik_Biomedik,
	Teknik_Komputer,
	Teknik_Informatika,
	Sistem_Informasi,
	Teknologi_Informasi,
	Teknik_Sipil,
	Arsitektur,
	Teknik_Lingkungan,
	Perencanaan_Wilayah_dan_Kota,
	Teknik_Geomatika,
	Teknik_Geofisika,
	Desain_Produk_Industri,
	Desain_Interior,
	Desain_Komunikasi_Visual,
	Manajemen_Bisnis,
	Studi_Pembangunan,
	Manajemen_Teknologi,
	Teknik_Infrastruktur_Sipil,
	Teknik_Mesin_Industri,
	Teknik_Elektro_Otomasi,
	Teknik_Kimia_Industri,
	Teknik_Instrumentasi,
	Statistika_Bisnis,
};

extern std::string departementsStr[38];

class person {
private:
	std::string id;
	std::string nama;
	int dd, mm, yy;

public:
	person(std::string id, std::string nama, int dd, int mm, int yy);

	std::string GetId(){return id;};

	void SetNama(std::string _nama){nama = _nama;};
	std::string GetNama(){return nama;};

	void SetTglLahir(int _dd, int _mm, int _yy){ dd = _dd; mm = _mm; yy = _yy; };
	int GetTglLahir(){ return dd; };
	int GetBulanLahir(){ return mm; };
	int GetTahunLahir(){ return yy; };
};


#endif
