#ifndef __MAHASISWA_CLASS
#define __MAHASISWA_CLASS

#include <iostream>
#include <vector>
#include "include/person.h"

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
