#ifndef __TENDIK_CLASS
#define __TENDIK_CLASS
#pragma once

#include <iostream>
#include "include/person.h"


class Tendik : public Person {
private:
	std::string npp;
	std::string unit;

public:
	Tendik(std::string id, std::string nama, int dd, int mm, int yy, std::string npp, std::string unit);

	void SetUnit(std::string _unit){unit = _unit;};
	std::string GetUnit(){return unit;};	
	std::string GetNPP(){return npp;};	
};

#endif
