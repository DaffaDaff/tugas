#include <iostream>
#include "include/tendik.h"


tendik::tendik(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string unit)
		: person(id, nama, dd, mm, yy), npp(npp), unit(unit)
{
}