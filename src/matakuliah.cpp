#include "include/matakuliah.h"

KelasMataKuliah::KelasMataKuliah(MataKuliah* matkul, int kode, int batas) : matkul(matkul), kode(kode), batasMhs(batas) {

}

MataKuliah::MataKuliah(string id, string nama, string kode, int sks) : id(id), nama(nama), kode(kode) {

}

void MataKuliah::GenerateKelas(int batas){
    KelasMataKuliah* kelasMatkul = new KelasMataKuliah(this, kelasVector.size() + 1, batas);

    kelasVector.push_back(kelasMatkul);
}