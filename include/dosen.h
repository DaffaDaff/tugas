#ifndef __DOSEN_CLASS
#define __DOSEN_CLASS
#pragma once

#include <iostream>
#include "include/person.h"
#include "include/matakuliah.h"

class MataKuliah;

class Dosen : public Person {
private:
	std::string npp;
	int departemen;
	std::vector<MataKuliah*> matkulVector;

public:
	Dosen(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, int departemen);

	std::string& GetNPP(){ return npp; };
	int& GetDepartemen(){ return departemen; };
	std::vector<MataKuliah*>& GetMataKuliahVector() { return matkulVector; }

	void AddMataKuliah(MataKuliah* matkul) { matkulVector.push_back(matkul); }
};


#endif 
