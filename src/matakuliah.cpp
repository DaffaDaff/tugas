#include "include/matakuliah.h"

KelasMataKuliah::KelasMataKuliah(int kode, int batas) : kode(kode), batasMhs(batas) {

}

MataKuliah::MataKuliah(string id, string nama, string kode) : id(id), nama(nama), kode(kode) {

}

void MataKuliah::GenerateKelas(int batas){
    KelasMataKuliah* kelasMatkul = new KelasMataKuliah(kelasVector.size() + 1, batas);

    kelasVector.push_back(kelasMatkul);
}