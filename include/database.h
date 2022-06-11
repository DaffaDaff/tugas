#ifndef __DATA_CLASS
#define __DATA_CLASS
#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

#include "include/person.h"
#include "include/mahasiswa.h"
#include "include/dosen.h"
#include "include/tendik.h"
#include "include/matakuliah.h"

class database{
private:
    std::vector<Mahasiswa*> mhsVector;
	std::vector<Dosen*> dosenVector;
	std::vector<Tendik*> tendikVector;
    std::vector<MataKuliah*> mataKuliahVector;

public:
    database();

    std::vector<Mahasiswa*>& GetMhsVector() { return mhsVector; }
    std::vector<Dosen*>& GetDosenVector() { return dosenVector; }
    std::vector<Tendik*>& GetTendikVector() { return tendikVector; }
    std::vector<MataKuliah*>& GetMataKuliahVector() { return mataKuliahVector; }

    void AddMhs(Mahasiswa* _Mahasiswa) { mhsVector.push_back(_Mahasiswa); }
    void AddDosen(Dosen* _dosen) { dosenVector.push_back(_dosen); }
    void AddTendik(Tendik* _tendik) { tendikVector.push_back(_tendik); }
    void AddMataKuliah(MataKuliah* _mataKuliah) { mataKuliahVector.push_back(_mataKuliah); }

    void Load();
    void LoadMahasiwa();
    void LoadDosen();
    void LoadTendik();
    void LoadMataKuliah();

    void Save();
    void SaveMahasiswa();
    void SaveDosen();
    void SaveTendik();
    void SaveMataKuliah();
};

#endif