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
        	std::string id, nama, nrp, dd, mm, yy, tahunMasuk, departemen;
        
                std::stringstream mhsDatStream(mhsDat);
                std::string dat;

                std::getline(mhsDatStream, dat, ' ');
                id = dat;
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

                AddMhs(mahasiswa(id, nama, std::stoi(dd), std::stoi(mm), std::stoi(yy), nrp, (departements)std::stoi(departemen), std::stoi(tahunMasuk)));
        }

        DataFile.close();
}

void database::Save(){
        SaveMahasiswa();
}

void database::SaveMahasiswa(){
        std::ofstream DataFile("data/mahasiswa.data");

        for(unsigned int i = 0; i < recMhs.size(); i++){
                DataFile << recMhs[i].getId() << " ";
                DataFile << recMhs[i].getNama() << "\" ";
                DataFile << recMhs[i].getTglLahir() << " ";
                DataFile << recMhs[i].getBulanLahir() << " ";
                DataFile << recMhs[i].getTahunLahir() << " ";
                DataFile << recMhs[i].GetNRP() << " ";
                DataFile << recMhs[i].GetDepartemen() << " ";
                DataFile << recMhs[i].GetTahunMasuk() << " ";
        }

        DataFile.close();
}