#ifndef __DOSEN_CLASS
#define __DOSEN_CLASS

#include <iostream>
#include "include/person.h"

class dosen : public person {
private:
	std::string npp;
	departements departemen;

public:
	dosen(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, departements departemen);

	std::string GetNPP(){ return npp; };
	departements GetDepartemen(){ return departemen; };
};


#endif 
