#include <iostream>
#include <vector>
#include <string>

#include "include/input.h"
#include "include/database.h"
#include "include/person.h"
#include "include/mahasiswa.h"
#include "include/dosen.h"
#include "include/tendik.h"

using namespace std;

database* dat = new database();

enum states{
	MAIN
};

int main()
{
	states state = MAIN;

	while(1) {
		switch (state)
		{
		case MAIN:
			input::StartMenu(dat);
			break;
		
		default:
			break;
		}
	}

	return 0;
}