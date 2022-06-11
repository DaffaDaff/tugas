#ifndef __INPUT_CLASS
#define __INPUT_CLASS
#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

#include "include/utils.h"
#include "include/conio.h"
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

    Mahasiswa* InputMahasiswa(std::string id);
    Dosen* InputDosen(std::string id);
    Tendik* InputTendik(std::string id);
    MataKuliah* InputMataKuliah(std::string id);

    void ShowMahasiswa(database* data);
    void ShowDosen(database* data);
    void ShowTendik(database* data);
    void ShowMataKuliah(database* data);

    void PrintMahasiswa(database* data, int page);
    void PrintDosen(database* data, int page);
    void PrintTendik(database* data, int page);
    void PrintMataKuliah(database* data, int page);
    void PrintKelasMataKuliah(MataKuliah* data);

    void ShowMahasiswaData(database* data, int index);
    void ShowDosenData(database* data, int index);
    void ShowTendikData(database* data, int index);
    void ShowMataKuliahData(database* data, int index);

    int SelectDepartment();

}
#endif