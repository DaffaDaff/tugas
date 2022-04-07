#include <iostream>

#include "include/database.h"

database::database(std::vector<mahasiswa> recMhs, std::vector<dosen> recDosen, std::vector<tendik> recTendik)
        : recMhs(recMhs), recDosen(recDosen), recTendik(recTendik){};