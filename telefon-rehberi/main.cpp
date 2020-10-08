#include "Classes.h"
int main() {

	string menuNames[7] = {
		"Kayit Ekle", "Kayit Duzenle", "Kayit Sil", "Tum Kayitlari Listele",
		"Ad veya Soyada Gore Bilgileri Getir", "Telefona Gore Bilgileri Getir",
		"Cikis"
	};
	
	MainMenu mainMenu(menuNames);
	mainMenu.start();

	// int redirector = mainMenu.start();
	// cout << "Redirector is: " << redirector << endl;
	/*if (redirector == 0) {
		addNewPhoneMenu.start();
	}
	*/
	
	return 0;
}