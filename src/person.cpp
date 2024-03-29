#include "include/person.h"

std::string departements[38] = {
	"Fisika",
	"Matematika",
	"Statistika",
	"Kimia",
	"Biologi",
	"Aktuaria",
	"Teknik Pekapalan",
	"Teknik Sistem Perkapalan",
	"Teknik Kelautan",
	"Teknik Transportasi Laut",
	"Teknik Mesin",
	"Teknik Fisika",
	"Teknik Sistem dan Industri",
	"Teknik Material",
	"Teknik Elektro",
	"Teknik Biomedik",
	"Teknik Komputer",
	"Teknik Informatika",
	"Sistem Informasi",
	"Teknologi Informasi",
	"Teknik Sipil",
	"Arsitektur",
	"Teknik Lingkungan",
	"Perencanaan Wilayah dan Kota",
	"Teknik Geomatika",
	"Teknik Geofisika",
	"Desain Produk Industri",
	"Desain Interior",
	"Desain Komunikasi Visual",
	"Manajemen Bisnis",
	"Studi Pembangunan",
	"Manajemen Teknologi",
	"Teknik Infrastruktur Sipil",
	"Teknik Mesin Industri",
	"Teknik Elektro Otomasi",
	"Teknik Kimia Industri",
	"Teknik Instrumentasi",
	"Statistika Bisnis"
};

Person::Person(std::string id, std::string nama, int dd, int mm, int yy) : id(id), nama(nama), dd(dd), mm(mm), yy(yy){
}