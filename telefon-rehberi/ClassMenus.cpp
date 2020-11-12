#include "Classes.h"

using namespace std;

void ClassMenus::print_menu() {
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
	for (int i = 0; i < sizeof(menuNames) / sizeof(string); i++) {
		// cout << i;
		// this->menuNames[i] = menuNames[i];
		string arrayMember = menuNames[i];
		cout << arrayMember << endl;
	}
}