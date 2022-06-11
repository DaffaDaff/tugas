#include "include/Mahasiswa.h"

FRS::FRS(int semester, int batasSKS) : semester(semester), batasSKS(batasSKS){

}

void FRS::HitungSKS(){
	sks = 0;

	for(MataKuliah* matkul : matkulVector){
		sks += matkul->GetSKS();
	}
}

void FRS::AddMataKuliah(MataKuliah* matkul) { 
	matkulVector.push_back(matkul);

	nilaiVector.push_back(-1);

	HitungSKS();
}

Mahasiswa::Mahasiswa(std::string id, std::string nama, int dd, int mm, int yy, 
				std::string nrp, int departemen, int tahunmasuk, int semesterke)
		: Person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk), semesterke(semesterke)
{
}

