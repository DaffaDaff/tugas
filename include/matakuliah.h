#ifndef __MATA_KULIAH_CLASS
#define __MATA_KULIAH_CLASS
#pragma once

#include <iostream>
#include <vector>

#include "include/mahasiswa.h"
#include "include/dosen.h"

using namespace std;

class Mahasiswa;
class Dosen;
class MataKuliah;

class KelasMataKuliah{
    private:
        MataKuliah* matkul;
        int kode;
        int batasMhs;

        vector<Dosen*> dosenVector;
        vector<Mahasiswa*> mahasiswaVector;

    public:
        KelasMataKuliah(MataKuliah* matkul, int kode, int batas);

        int& GetKode() { return kode; }
        int& GetBatas() { return batasMhs; }
        vector<Dosen*>& GetDosenVector() { return dosenVector; }
        vector<Mahasiswa*>& GetMahasiswaVector() { return mahasiswaVector; }

        void AddDosen(Dosen* dosen) { dosenVector.push_back(dosen); }
        void AddMahasiswa(Mahasiswa* mahasiswa) { mahasiswaVector.push_back(mahasiswa); }
};


class MataKuliah{
    private:
        string id;
        string nama;
        string kode;
        int sks;

        vector<KelasMataKuliah*> kelasVector;

    public:
        MataKuliah(string id, string nama, string kode, int sks);

        string GetID() { return id; }
        string GetNama() { return nama; }
        string GetKode() { return kode; }
        int GetSKS() {return sks; }
        vector<KelasMataKuliah*>& GetKelasVector() { return kelasVector; }

        void GenerateKelas(int batas);
        void AddKelas();
};

#endif