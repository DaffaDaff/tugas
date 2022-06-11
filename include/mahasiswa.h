#ifndef __Mahasiswa_CLASS
#define __Mahasiswa_CLASS
#pragma once

#include <iostream>
#include <vector>
#include "include/person.h"
#include "include/matakuliah.h"

using namespace std;

class MataKuliah;

class FRS {
	private:
		int semester;
		int ips;
		int batasSKS;
		int sks;

		vector<MataKuliah*> matkulVector;
		vector<int> nilaiVector;

	public:
		FRS(int semester, int batasSKS);

		int GetSemester() { return semester; }
		int GetIPS() { return ips; }
		int GetBatasSKS() { return batasSKS; }
		int GetSKS() { return sks; }
		vector<MataKuliah*>& GetMataKuliahVector() { return matkulVector; }
		vector<int>& GetNilaiVector() { return nilaiVector; }

		void HitungSKS();

		void AddMataKuliah(MataKuliah* matkul);
		void SetNilai(int index, int value) { nilaiVector[index] = value; }
};

class Mahasiswa : public Person {
private:
	string nrp;
	int departemen;
	int tahunmasuk;
	int semesterke;
	
	vector<FRS*> frsVector;
	float ipk;

public:
	Mahasiswa(string id, string nama, int dd, int mm, int yy, string nrp, int departemen, int tahunmasuk, int semesterke);

	int& GetDepartemen() { return departemen; };
	string& GetNRP() { return nrp; };
	int& GetTahunMasuk() { return tahunmasuk; };
	int& GetSemester() { return semesterke; };
	vector<FRS*>& GetFRSVector() { return frsVector; }
	
	void SetSemester(int _semesterke) { semesterke = _semesterke; }

	void AddFRS(FRS* frs) { frsVector.push_back(frs); }
};

#endif
