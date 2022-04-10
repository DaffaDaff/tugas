#ifndef __INPUT_CLASS
#define __INPUT_CLASS

#include <iostream>
#include <string>
#include <vector>

#include "include/utils.h"
#include "include/database.h"
#include "include/person.h"
#include "include/mahasiswa.h"
#include "include/dosen.h"
#include "include/tendik.h"

namespace input{
    void StartMenu(database* dat);
    mahasiswa InputMahasiswa(std::string id);
    dosen InputDosen();
    tendik InputTendik();
    void ShowMahasiswa(database* data);
    void ShowDosen(database* data);
    void ShowTendik(database* data);
    void ShowMahasiswaData(mahasiswa* mhs);
    departements SelectDepartment();

}
#endif