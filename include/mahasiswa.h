#ifndef __MAHASISWA_CLASS
#define __MAHASISWA_CLASS

#include <iostream>
#include "include/person.h"

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

class mahasiswa : public person {
private:
	std::string nrp;
	departements departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	std::vector<float> ipsList;

public:
	mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,
					std::string nrp, departements departemen, int tahunmasuk);

	departements GetDepartemen(){return departemen;};
	std::string GetNRP(){return nrp;};
	int GetTahunMasuk(){return tahunmasuk;};

	void setSemester(int _semesterke){semesterke = _semesterke;};
	int getSemester(){return semesterke;};

	void setSKSLulus(int _skslulus){skslulus = _skslulus;};
	int getSKSLulus(){return skslulus;};

	void setIPS(int semester, float _ips){ipsList[semester - 1] = _ips;};
	float getIPS(int semester){return ipsList[semester - 1];};

	void hitungIPK();

	std::vector<float> getAllIPS();
};

#endif
