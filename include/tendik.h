#ifndef __TENDIK_CLASS
#define __TENDIK_CLASS

#include <iostream>
#include "include/person.h"


class tendik : public person {
private:
	std::string npp;
	std::string unit;

public:
	tendik(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string unit);

	void setUnit(std::string _unit){unit = _unit;};
	std::string getUnit(){return unit;};	
	std::string getNPP(){return npp;};	
};

#endif
