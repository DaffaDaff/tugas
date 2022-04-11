#include <fstream>
#include <sstream>

#include "include/database.h"

database::database(){
        Load();
};

void database::Load(){
        LoadMahasiwa();
        LoadDosen();
        LoadTendik();
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

void database::LoadDosen(){
        std::ifstream DataFile("data/dosen.data");

        std::string dosenDat = " ";
        while(std::getline(DataFile, dosenDat)){
        	std::string id, nama, npp, dd, mm, yy, departemen;
        
                std::stringstream dosenDatStream(dosenDat);
                std::string dat;

                std::getline(dosenDatStream, dat, ' ');
                id = dat;
                std::getline(dosenDatStream, dat, '\"');
                std::getline(dosenDatStream, dat, '\"');
                nama = dat;
                std::getline(dosenDatStream, dat, ' ');
                std::getline(dosenDatStream, dat, ' ');
                dd = dat;
                std::getline(dosenDatStream, dat, ' ');
                mm = dat;
                std::getline(dosenDatStream, dat, ' ');
                yy = dat;
                std::getline(dosenDatStream, dat, ' ');
                npp = dat;
                std::getline(dosenDatStream, dat, ' ');
                departemen = dat;

                AddDosen( dosen(id, nama, std::stoi(dd), std::stoi(mm), std::stoi(yy), npp, (departements)std::stoi(departemen)) );
        }

        DataFile.close();
}

void database::LoadTendik(){
        std::ifstream DataFile("data/tendik.data");

        std::string tendikDat = " ";
        while(std::getline(DataFile, tendikDat)){
        	std::string id, nama, npp, dd, mm, yy, unit;
        
                std::stringstream tendikDatStream(tendikDat);
                std::string dat;

                std::getline(tendikDatStream, dat, ' ');
                id = dat;
                std::getline(tendikDatStream, dat, '\"');
                std::getline(tendikDatStream, dat, '\"');
                nama = dat;
                std::getline(tendikDatStream, dat, ' ');
                std::getline(tendikDatStream, dat, ' ');
                dd = dat;
                std::getline(tendikDatStream, dat, ' ');
                mm = dat;
                std::getline(tendikDatStream, dat, ' ');
                yy = dat;
                std::getline(tendikDatStream, dat, ' ');
                npp = dat;
                std::getline(tendikDatStream, dat, '\"');
                std::getline(tendikDatStream, dat, '\"');
                unit = dat;

                AddTendik( tendik(id, nama, std::stoi(dd), std::stoi(mm), std::stoi(yy), npp, unit) );
        }

        DataFile.close();
}

void database::Save(){
        SaveMahasiswa();
        SaveDosen();
        SaveTendik();
}

void database::SaveMahasiswa(){
        std::ofstream DataFile("data/mahasiswa.data");

        for(unsigned int i = 0; i < mhsVector.size(); i++){
                DataFile << i << " \"";
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

void database::SaveDosen(){
        std::ofstream DataFile("data/dosen.data");

        for(unsigned int i = 0; i < dosenVector.size(); i++){
                DataFile << i << " \"";
                DataFile << dosenVector[i].GetNama() << "\" ";
                DataFile << dosenVector[i].GetTglLahir() << " ";
                DataFile << dosenVector[i].GetBulanLahir() << " ";
                DataFile << dosenVector[i].GetTahunLahir() << " ";
                DataFile << dosenVector[i].GetNPP() << " ";
                DataFile << dosenVector[i].GetDepartemen() << " ";

                DataFile << std::endl;
        }

        DataFile.close();
}

void database::SaveTendik(){
        std::ofstream DataFile("data/tendik.data");

        for(unsigned int i = 0; i < tendikVector.size(); i++){
                DataFile << i << " \"";
                DataFile << tendikVector[i].GetNama() << "\" ";
                DataFile << tendikVector[i].GetTglLahir() << " ";
                DataFile << tendikVector[i].GetBulanLahir() << " ";
                DataFile << tendikVector[i].GetTahunLahir() << " ";
                DataFile << tendikVector[i].GetNPP() << " \"";
                DataFile << tendikVector[i].GetUnit() << "\" ";

                DataFile << std::endl;
        }

        DataFile.close();
}