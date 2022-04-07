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
    database(std::vector<mahasiswa> recMhs, std::vector<dosen> recDosen, std::vector<tendik> recTendik);
    void AddMahasiswa(std::string id, std::string nama, int dd, int mm, int yy, std::string nrp, std::string departemen, int tahunmasuk);
    void AddDosen();

    std::vector<mahasiswa> GetRecMhs(){return recMhs;}
    std::vector<dosen> GetRecDosen(){return recDosen;}
    std::vector<tendik> GetRecTendik(){return recTendik;}
};

#endif