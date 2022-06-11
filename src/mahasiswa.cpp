#include "include/Mahasiswa.h"

Mahasiswa::Mahasiswa(std::string id, std::string nama, int dd, int mm, int yy, 
				std::string nrp, int departemen, int tahunmasuk, int semesterke)
		: Person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk), semesterke(semesterke)
{
	ipk = 0.0;

	ipsList = std::vector<float>(14,0);
}

void Mahasiswa::HitungIPK()
{
}



