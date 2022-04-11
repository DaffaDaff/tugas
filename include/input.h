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

enum commands {
    null,
    erase,
    close,
};

namespace input{
    void StartMenu(database* dat);

    mahasiswa InputMahasiswa(std::string id);
    dosen InputDosen(std::string id);
    tendik InputTendik(std::string id);

    void ShowMahasiswa(database* data);
    void ShowDosen(database* data);
    void ShowTendik(database* data);

    commands ShowMahasiswaData(mahasiswa* _mahasiswa);
    commands ShowDosenData(dosen* _dosen);
    commands ShowTendikData(tendik* _tendik);

    departements SelectDepartment();

}
#endif