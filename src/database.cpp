#include <fstream>
#include <sstream>

#include "include/database.h"

database::database(){
        Load();
};

void database::Load(){
        LoadMahasiwa();
}

void database::LoadMahasiwa(){
        std::ifstream DataFile("data/mahasiswa.data");

        std::string mhsDat = " ";
        while(std::getline(DataFile, mhsDat)){
        	std::string id, nama, nrp, dd, mm, yy, tahunMasuk, departemen, semester;
        
                std::stringstream mhsDatStream(mhsDat);
                std::string dat;

                std::getline(mhsDatStream, dat, ' ');
                id = dat;
                std::getline(mhsDatStream, dat, '\"');
                std::getline(mhsDatStream, dat, '\"');
                nama = dat;
                std::getline(mhsDatStream, dat, ' ');
                std::getline(mhsDatStream, dat, ' ');
                dd = dat;
                std::getline(mhsDatStream, dat, ' ');
                mm = dat;
                std::getline(mhsDatStream, dat, ' ');
                yy = dat;
                std::getline(mhsDatStream, dat, ' ');
                nrp = dat;
                std::getline(mhsDatStream, dat, ' ');
                departemen = dat;
                std::getline(mhsDatStream, dat, ' ');
                tahunMasuk = dat;
                std::getline(mhsDatStream, dat, ' ');
                semester = dat;

                AddMhs( mahasiswa(id, nama, std::stoi(dd), std::stoi(mm), std::stoi(yy), nrp, (departements)std::stoi(departemen), std::stoi(tahunMasuk), std::stoi(semester)) );
        }

        DataFile.close();
}

void database::Save(){
        SaveMahasiswa();
}

void database::SaveMahasiswa(){
        std::ofstream DataFile("data/mahasiswa.data");

        for(unsigned int i = 0; i < mhsVector.size(); i++){
                DataFile << mhsVector[i].GetId() << " \"";
                DataFile << mhsVector[i].GetNama() << "\" ";
                DataFile << mhsVector[i].GetTglLahir() << " ";
                DataFile << mhsVector[i].GetBulanLahir() << " ";
                DataFile << mhsVector[i].GetTahunLahir() << " ";
                DataFile << mhsVector[i].GetNRP() << " ";
                DataFile << mhsVector[i].GetDepartemen() << " ";
                DataFile << mhsVector[i].GetTahunMasuk() << " ";
                DataFile << mhsVector[i].GetSemester() << " ";

                DataFile << std::endl;
        }

        DataFile.close();
}