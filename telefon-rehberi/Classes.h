#pragma once

#include <iostream>
#include <sstream>
#include <map>

// Super-Class
class ClassMenus {
public:
	std::string menuNames[7];
	void print_menu();
};

// Sub-Classes

class MainMenu: public ClassMenus {
private:
	int redirect_input(int inp);
public:
	MainMenu() {};
	MainMenu(std::string menuNames[7]);
	int start();
	void rename_menus();
};

class AddNewPhoneMenu: public ClassMenus {
private:
	std::map<std::string, std::string> addPhoneMenuInputs; // not used atm
	void rename_menus();
	void map_editor(std::map<std::string, std::string> addPhoneMenuInputs);
public:
	AddNewPhoneMenu();
	int start();
};

class EditPhoneMenu: public ClassMenus {
private:
	void rename_menus();
public:
	EditPhoneMenu();
	int start();
};

class ErasePhoneMenu : public ClassMenus {
private:
	void rename_menus();
public:
	ErasePhoneMenu();
	int start();
};