#include "include/dosen.h"


Dosen::Dosen(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, int departemen)
		: Person(id, nama, dd, mm, yy), npp(npp), departemen(departemen)
{ 
}