#include <iostream>
#include <vector>
#include <string>

#include "include/input.h"
#include "include/database.h"

using namespace std;

database* dat = new database();

int main()
{
	input::StartMenu(dat);

	dat->Save();

	return 0;
}