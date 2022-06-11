#ifndef __Mahasiswa_CLASS
#define __Mahasiswa_CLASS
#pragma once

#include <iostream>
#include <vector>
#include "include/person.h"
#include "include/matakuliah.h"

class MataKuliah;

class Mahasiswa : public Person {
private:
	std::string nrp;
	int departemen;
	int tahunmasuk;
	int semesterke;
	std::vector<MataKuliah*> matkulVector;
	float ipk;
	std::vector<float> ipsList;

public:
	Mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,
					std::string nrp, int departemen, int tahunmasuk, int semesterke);

	int& GetDepartemen(){ return departemen; };
	std::string& GetNRP(){ return nrp; };
	int& GetTahunMasuk(){ return tahunmasuk; };
	int& GetSemester(){ return semesterke; };
	std::vector<MataKuliah*>& GetMataKuliahVector() { return matkulVector; }
	
	float GetIPS(int semester){ return ipsList[semester - 1]; };

	void SetSemester(int _semesterke){ semesterke = _semesterke; };

	void SetIPS(int semester, float _ips){ ipsList[semester - 1] = _ips; HitungIPK(); };

	void AddMataKuliah(MataKuliah* matkul) { matkulVector.push_back(matkul); }

	void HitungIPK();
	float GetIPK(){ return ipk; };

	std::vector<float> getAllIPS();
};

#endif
