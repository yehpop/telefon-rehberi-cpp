#include "Classes.h"

// I am not sure if I should use a map but, I'll keep it like this 'til I figure
AddNewPhoneMenu::AddNewPhoneMenu() {
	/*string isim = "";
	string soyisim = "";
	stringstream telNo;
	stringstream evNo;
	telNo << 0;
	evNo << 0;
	string email = "";
	this->addPhoneMenuInputs = addPhoneMenuInputs = {
		{ "İsim: ", isim },
		{ "Soyisim: " , soyisim },
		{ "Tel No: " , telNo.str() },
		{ "Ev No: " , evNo.str() },
		{ "Email: " , email }
	};*/
	// bi şeyler daha eklemem gerekicek gibi ama neyse düşünürüm sonra :p
	// ekliyom spdfjsdplfjghpdlkj
	string menuNames[7] = {
	"1- Ekleyeceginiz kaydin ismi: " ,
	"2- Ekleyeceginiz kaydin soyismi: " ,
	"3- Ekleyeceginiz kaydin tel no'su: " ,
	"4- Ekleyeceginiz kaydin ev no'su: " ,
	"5- Ekleyeceginiz kaydin email'i: "
	};
	for (int i = 0; i < (sizeof(this->menuNames) / sizeof(string)); i++) {
		this->menuNames[i] = menuNames[i];
	}
	rename_menus();
}

/* void AddNewPhoneMenu::print_menu() {
	// napcam lna
	cout << "menu to add a phone" << endl;
} 
*/

int AddNewPhoneMenu::start() {
	print_menu();
	return true;
}

void AddNewPhoneMenu::rename_menus() {
	cout << "rename_menus method running.." << endl;
	stringstream ss;
	ss.str("");
	for (int i = 0; i < sizeof(this->menuNames) / sizeof(string); i++) {
		ss.str("");
		string menuName = this->menuNames[i];
		ss << i + 1;
		ss << "-";
		ss << menuName;
		this->menuNames[i] = ss.str();
	}
	cout << "rename_menus method exiting..." << endl;
}
