#include "include/database.h"

database::database(){
        Load();
};

void database::Load(){
        LoadMahasiwa();
        LoadDosen();
        LoadTendik();
        LoadMataKuliah();
}

void database::LoadMahasiwa(){
        mhsVector.clear();

        std::ifstream DataFile("data/Mahasiswa.data");

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

                Mahasiswa* mahasiswa = new Mahasiswa(id, nama, std::stoi(dd), std::stoi(mm), std::stoi(yy), nrp, std::stoi(departemen), std::stoi(tahunMasuk), std::stoi(semester));

                mhsVector.push_back(mahasiswa);
        }

        DataFile.close();
}

void database::LoadDosen(){
        dosenVector.clear();

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
                
                Dosen* dosen = new Dosen(id, nama, std::stoi(dd), std::stoi(mm), std::stoi(yy), npp, std::stoi(departemen));

                dosenVector.push_back(dosen);
        }

        DataFile.close();
}

void database::LoadTendik(){
        tendikVector.clear();

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

                Tendik* tendik = new Tendik(id, nama, std::stoi(dd), std::stoi(mm), std::stoi(yy), npp, unit);

                tendikVector.push_back(tendik);
        }

        DataFile.close();
}

void database::LoadMataKuliah(){
        mataKuliahVector.clear();

        std::ifstream DataFile("data/matakuliah.data");

        std::string matkuldat = " ";
        while(std::getline(DataFile, matkuldat)){
        	std::string id, nama, kode, sks;
        
                std::stringstream matkulDatStream(matkuldat);
                std::string dat;

                std::getline(matkulDatStream, dat, ' ');
                id = dat;
                std::getline(matkulDatStream, dat, '\"');
                std::getline(matkulDatStream, dat, '\"');
                nama = dat;
                std::getline(matkulDatStream, dat, ' ');
                std::getline(matkulDatStream, dat, ' ');
                kode = dat;
                std::getline(matkulDatStream, dat, ' ');
                sks = dat;

                MataKuliah* matkul = new MataKuliah(id, nama, kode, std::stoi(sks));

                std::getline(matkulDatStream, dat, '{');
                while(dat != "}"){
                        std::getline(matkulDatStream, dat, '{');
                }

                mataKuliahVector.push_back(matkul);
        }

        DataFile.close();
}

void database::Save(){
        SaveMahasiswa();
        SaveDosen();
        SaveTendik();
        SaveMataKuliah();
}

void database::SaveMahasiswa(){
        std::ofstream DataFile("data/mahasiswa.data");

        for(unsigned int i = 0; i < mhsVector.size(); i++){
                DataFile << i << " \"";
                DataFile << mhsVector[i]->GetNama() << "\" ";
                DataFile << mhsVector[i]->GetTglLahir() << " ";
                DataFile << mhsVector[i]->GetBulanLahir() << " ";
                DataFile << mhsVector[i]->GetTahunLahir() << " ";
                DataFile << mhsVector[i]->GetNRP() << " ";
                DataFile << mhsVector[i]->GetDepartemen() << " ";
                DataFile << mhsVector[i]->GetTahunMasuk() << " ";
                DataFile << mhsVector[i]->GetSemester() << " ";

                DataFile << std::endl;
        }

        DataFile.close();
}

void database::SaveDosen(){
        std::ofstream DataFile("data/dosen.data");

        for(unsigned int i = 0; i < dosenVector.size(); i++){
                DataFile << i << " \"";
                DataFile << dosenVector[i]->GetNama() << "\" ";
                DataFile << dosenVector[i]->GetTglLahir() << " ";
                DataFile << dosenVector[i]->GetBulanLahir() << " ";
                DataFile << dosenVector[i]->GetTahunLahir() << " ";
                DataFile << dosenVector[i]->GetNPP() << " ";
                DataFile << dosenVector[i]->GetDepartemen() << " ";

                DataFile << std::endl;
        }

        DataFile.close();
}

void database::SaveTendik(){
        std::ofstream DataFile("data/tendik.data");

        for(unsigned int i = 0; i < tendikVector.size(); i++){
                DataFile << i << "\"";
                DataFile << tendikVector[i]->GetNama() << "\" ";
                DataFile << tendikVector[i]->GetTglLahir() << " ";
                DataFile << tendikVector[i]->GetBulanLahir() << " ";
                DataFile << tendikVector[i]->GetTahunLahir() << " ";
                DataFile << tendikVector[i]->GetNPP() << " \"";
                DataFile << tendikVector[i]->GetUnit() << "\" ";

                DataFile << std::endl;
        }

        DataFile.close();
}

void database::SaveMataKuliah(){
        std::ofstream DataFile("data/matakuliah.data");

        for(unsigned int i = 0; i < mataKuliahVector.size(); i++){
                DataFile << i << " \"";
                DataFile << mataKuliahVector[i]->GetNama() << "\" ";
                DataFile << mataKuliahVector[i]->GetKode() << " ";
                DataFile << mataKuliahVector[i]->GetSKS() << " {";

                for(KelasMataKuliah* kelas: mataKuliahVector[i]->GetKelasVector()){
                        DataFile << "[";
                        DataFile << kelas->GetKode() << " ";
                        DataFile << kelas->GetBatas() << " ";
                }

                DataFile << "}";

                DataFile << std::endl;
        }

        DataFile.close();
}