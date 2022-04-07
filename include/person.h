#ifndef __PERSON_CLASS
#define __PERSON_CLASS

#include <iostream>

class person {
private:
	std::string id;
	std::string nama;
	int dd, mm, yy;

public:
	person(std::string id, std::string nama, int dd, int mm, int yy);

	std::string getId(){return id;};

	void setNama(std::string _nama){nama = _nama;};
	std::string getNama(){return nama;};

	void setTglLahir(int _dd, int _mm, int _yy){dd = _dd; mm = _mm; yy = _yy;};
	int getTglLahir(){return dd;};
	int getBulanLahir(){return mm;};
	int getTahunLahir(){return yy;};
};


#endif
