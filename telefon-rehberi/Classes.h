#pragma once

#include <iostream>
#include <sstream>
#include <map>

using namespace std;

// Super-Class
class ClassMenus {
public:
	string menuNames[7];
	void print_menu();
};

// Sub-Classes

class MainMenu: public ClassMenus {
private:
	int redirect_input(int inp);
public:
	MainMenu() {};
	MainMenu(string menuNames[7]);
	int start();
	void rename_menus();
};

class AddNewPhoneMenu: public ClassMenus {
private:
	string menuNames[7] =
	{
	"Ekleyeceginiz kaydin ismi: " ,
	"Ekleyeceginiz kaydin soyismi: " ,
	"Ekleyeceginiz kaydin tel no'su: " ,
	"Ekleyeceginiz kaydin ev no'su: " ,
	"Ekleyeceginiz kaydin email'i: "
	};
	map<string, string> addPhoneMenuInputs; // not used atm
	void rename_menus();
	// void print_menu(); // not used atm
	void map_editor(map<string, string> addPhoneMenuInputs);
public:
	AddNewPhoneMenu();
	int start();
};

class EditPhoneMenu: public ClassMenus {
private:
	string menuNames[7] =
	{
	"Edit Phone Menu...",
	"",
	"",
	"",
	"",
	"",
	""
	};
public:
	EditPhoneMenu();
	int start();
};