#include "Classes.h"

MainMenu::MainMenu(string menuNames[7]) {
	// int lenOfArray = sizeof(menuNames);
	for (int i = 0; i < (sizeof(this->menuNames) / sizeof(string)); i++) {
		// cout << i;
		this->menuNames[i] = menuNames[i];
		// string arrayMember = this->menuNames[i];
		// cout << arrayMember << endl;
	}
	this->rename_menus();
	// cout << endl << sizeof(this->menuNames) / sizeof(string) << endl;
}

void MainMenu::rename_menus() {
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

// ya üsttekinde ya da alttakindeki bi şi alt-sınıfların menülerinin boş olmasına sebeb oluyo
/*
void MainMenu::print_menu() {
	string mainMenuName = "TELEFON REHBERI";
	int maxLen = 0;
	for (int i = 0; i < sizeof(menuNames) / sizeof(string); i++) {
		string menuName = this->menuNames[i];
		if (sizeof(menuName) / sizeof(char) > maxLen)
			maxLen = (sizeof(menuName) / sizeof(char));
	}
	// int offset = (maxLen - sizeof(mainMenuName)) / 2
	int offset = maxLen / 2 - (sizeof("TELEFON REHBERI") / sizeof(char)) / 2;
	for (int i = 0; i - 1 <= offset; i++) { cout << " " << flush; }
	cout << mainMenuName << flush;
	for (int i = 0; i - 1 <= offset; i++) { cout << " " << flush; }
	cout << endl;
	for (int i = 0; i - 2 <= maxLen; i++) { cout << "#" << flush; }
	cout << endl;
	for (int i = 0; i < sizeof(this->menuNames) / sizeof(string); i++) {
		// cout << i;
		// this->menuNames[i] = menuNames[i];
		string arrayMember = this->menuNames[i];
		cout << arrayMember << endl;
	}
}
*/

int MainMenu::start() {
	print_menu();

	int inp = 0;
	// not (inp.isdigit() and 0 < int(inp) <= len(self.menuNames))
	while (true) {
		do {
			cout << "Girmek Istedigin Menuyu Yaz: " << flush;
			cin >> inp;
		} while (bool(isdigit(inp)) != true && (0 < inp < ((sizeof(menuNames) / sizeof(string))) + 1) != true);
		if (bool(isdigit(inp)) == true && (0 < inp < ((sizeof(menuNames) / sizeof(string))) + 1) == true);
		return redirect_input(int(inp) - 1);
	}
}

int MainMenu::redirect_input(int inp) {
	/* this is the -incomplete- python code
	print(self.menuNames[inp])

	if self.menuNames[inp] == "Kayıt Ekle":
		addNewPhoneMenu = AddNewPhoneMenu(MainMenu)
		addNewPhoneMenu.start()

	*/
	string menuSelection = menuNames[inp];
	cout << endl << menuSelection << endl;
	cout << string(5, '\n');
	if (menuSelection == menuNames[0]) {
		AddNewPhoneMenu addNewPhoneMenu;
		return addNewPhoneMenu.start();
	}
	else if (menuSelection == menuNames[1]) {
		EditPhoneMenu editPhoneMenu;
		return editPhoneMenu.start();	// 2 girince program ölüyo niye acaba
	}
	else if (menuSelection == menuNames[6]) {
		cout << "Telefon rehberinden cikis yapiliyor..." << endl;
		exit;
	}
}