#include "include/tendik.h"


Tendik::Tendik(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string unit)
		: Person(id, nama, dd, mm, yy), npp(npp), unit(unit)
{
}