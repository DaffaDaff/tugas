#ifndef __MAHASISWA_CLASS
#define __MAHASISWA_CLASS

#include <iostream>
#include <vector>
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

std::string departementsStr[38] = {
	"Fisika",
	"Matematika",
	"Statistika",
	"Kimia",
	"Biologi",
	"Aktuaria",
	"Teknik Pekapalan",
	"Teknik Sistem Perkapalan",
	"Teknik Kelautan",
	"Teknik Transportasi Laut",
	"Teknik Mesin",
	"Teknik Fisika",
	"Teknik Sistem dan Industri",
	"Teknik Material",
	"Teknik Elektro",
	"Teknik Biomedik",
	"Teknik Komputer",
	"Teknik Informatika",
	"Sistem Informasi",
	"Teknologi Informasi",
	"Teknik Sipil",
	"Arsitektur",
	"Teknik Lingkungan",
	"Perencanaan Wilayah dan Kota",
	"Teknik Geomatika",
	"Teknik Geofisika",
	"Desain Produk Industri",
	"Desain Interior",
	"Desain Komunikasi Visual",
	"Manajemen Bisnis",
	"Studi Pembangunan",
	"Manajemen Teknologi",
	"Teknik Infrastruktur Sipil",
	"Teknik Mesin Industri",
	"Teknik Elektro Otomasi",
	"Teknik Kimia Industri",
	"Teknik Instrumentasi",
	"Statistika Bisnis"
};

class mahasiswa : public person {
private:
	std::string nrp;
	departements departemen;
	int tahunmasuk;
	int semesterke;
	float ipk;
	std::vector<float> ipsList;

public:
	mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,
					std::string nrp, departements departemen, int tahunmasuk, int semesterke);

	departements GetDepartemen(){ return departemen; };
	std::string GetNRP(){ return nrp; };
	int GetTahunMasuk(){ return tahunmasuk; };

	void SetSemester(int _semesterke){ semesterke = _semesterke; };
	int GetSemester(){ return semesterke; };

	void SetIPS(int semester, float _ips){ ipsList[semester - 1] = _ips; HitungIPK(); };
	float GetIPS(int semester){ return ipsList[semester - 1]; };

	void HitungIPK();
	float GetIPK(){ return ipk; };

	std::vector<float> getAllIPS();
};

#endif
