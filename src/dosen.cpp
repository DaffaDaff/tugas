#include <iostream>

#include "include/dosen.h"


dosen::dosen(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string departemen)
		: person(id, nama, dd, mm, yy), npp(npp), departemen(departemen)
{ 
}