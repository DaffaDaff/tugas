#ifndef __DATA_CLASS
#define __DATA_CLASS

#include <iostream>
#include <vector>
#include <string>

#include "include/person.h"
#include "include/mahasiswa.h"
#include "include/dosen.h"
#include "include/tendik.h"

class database{
private:
    std::vector<mahasiswa> mhsVector;
	std::vector<dosen> dosenVector;
	std::vector<tendik> tendikVector;

public:
    database();

    std::vector<mahasiswa> GetMhsVector(){return mhsVector;}
    std::vector<dosen> GetDosenVector(){return dosenVector;}
    std::vector<tendik> GetTendikVector(){return tendikVector;}

    void AddMhs(mahasiswa _mahasiswa){mhsVector.push_back(_mahasiswa);};
    void AddDosen(dosen _dosen){dosenVector.push_back(_dosen);};
    void AddTendik(tendik _tendik){tendikVector.push_back(_tendik);};

    void Load();
    void LoadMahasiwa();

    void Save();
    void SaveMahasiswa();
};

#endif