#pragma once

#include <iostream>
#include <sstream>
#include <map>

using namespace std;

// Super-Classes

class MainMenu {
private:
	string menuNames[7];
	void print_menu();
	int redirect_input(int inp);
public:
	MainMenu() {};
	MainMenu(string menuNames[7]);
	int start();
	void rename_menus();
};

// Sub-Classes

class AddNewPhoneMenu : public MainMenu {
private:
	string menuNames[7] =
	{ 
	"Ekleyeceginiz kaydin ismi: " ,
	"Ekleyeceginiz kaydin soyismi: " ,
	"Ekleyeceginiz kaydin tel no'su: " ,
	"Ekleyeceginiz kaydin ev no'su: " ,
	"Ekleyeceginiz kaydin email'i: ",
	"",
	""
	};
	map<string, string> addPhoneMenuInputs; // not used atm
	void print_menu(); // not used atm
	void map_editor(map<string, string> addPhoneMenuInputs);
public:
	AddNewPhoneMenu();
	// int start();
};

class EditPhoneMenu : public MainMenu {
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
};