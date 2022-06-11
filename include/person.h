#ifndef __PERSON_CLASS
#define __PERSON_CLASS
#pragma once

#include <iostream>

extern std::string departements[38];

class Person {
private:
	std::string id;
	std::string nama;
	int dd, mm, yy;

public:
	Person(std::string id, std::string nama, int dd, int mm, int yy);

	std::string GetId(){return id;};

	void SetNama(std::string _nama){nama = _nama;};
	std::string GetNama(){return nama;};

	void SetTglLahir(int _dd, int _mm, int _yy){ dd = _dd; mm = _mm; yy = _yy; };
	int GetTglLahir(){ return dd; };
	int GetBulanLahir(){ return mm; };
	int GetTahunLahir(){ return yy; };
};


#endif
