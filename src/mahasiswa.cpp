#include <iostream>
#include <vector>
#include "include/mahasiswa.h"

mahasiswa::mahasiswa(std::string id, std::string nama, int dd, int mm, int yy, 
				std::string nrp, departements departemen, int tahunmasuk, int semesterke)
		: person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk), semesterke(semesterke)
{
	ipk = 0.0;

	ipsList = std::vector<float>(14,0);
}

void mahasiswa::HitungIPK()
{
}



