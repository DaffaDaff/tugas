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
    std::vector<mahasiswa> recMhs;
	std::vector<dosen> recDosen;
	std::vector<tendik> recTendik;

public:
    database();

    std::vector<mahasiswa> GetRecMhs(){return recMhs;}
    std::vector<dosen> GetRecDosen(){return recDosen;}
    std::vector<tendik> GetRecTendik(){return recTendik;}

    void AddMhs(mahasiswa _mahasiswa){recMhs.push_back(_mahasiswa);};
    void AddDosen(dosen _dosen);
    void AddTendik(tendik _tendik);

    void Load();
    void LoadMahasiwa();

    void Save();
    void SaveMahasiswa();
};

#endif