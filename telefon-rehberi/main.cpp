#include "Classes.h"
int main() {
	using namespace std;
	string menuNames[7] = {
		"Kayit Ekle", "Kayit Duzenle", "Kayit Sil", "Tum Kayitlari Listele",
		"Ad veya Soyada Gore Bilgileri Getir", "Telefona Gore Bilgileri Getir",
		"Cikis"
	};

	MainMenu mainMenu(menuNames);
	mainMenu.start();

	return 0;
}