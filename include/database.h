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

    void EraseMhsVector(int _index){ mhsVector.erase(mhsVector.begin() + _index); };
    void EraseDosenVector(int _index){ dosenVector.erase(dosenVector.begin() + _index); };
    void EraseTendikVector(int _index){ tendikVector.erase(tendikVector.begin() + _index); };

    void AddMhs(mahasiswa _mahasiswa){mhsVector.push_back(_mahasiswa);};
    void AddDosen(dosen _dosen){dosenVector.push_back(_dosen);};
    void AddTendik(tendik _tendik){tendikVector.push_back(_tendik);};

    void Load();
    void LoadMahasiwa();

    void Save();
    void SaveMahasiswa();
};

#endif