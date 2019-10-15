/*
* This file is where the menu takes place so that one can play the game
*/

#include "pch.h"
#include "menu.h"
#include "random_story.h"
#include <iostream>
#include <fstream>
using namespace std;


menu::menu()
{
}

int menu:: begin() {
	int final = 0;

	while (final == 0) {
		cout << "Welcome to life simulator.Please choose to start:\n";
		cout << "1) random\n 2)user defined\n 3) semi-defined"<<endl;
		int choice = 0;
		cin >> choice;
		//error check
		if (choice == 1) {
			cout << "Warning, this will create a new name for you. Do you wish to continue:(Y/N)";
			string pick;
			cin >> pick;
			if (pick == "n") {
				final = 0;
			}
			else if (pick == "N"){
				final = 0;
			}
			else {
				int old = 2;
				string fname = "susan";
				string lname = "tear";
				random_story create;
				create.chacater(old, fname, lname);
				final = 1;
			}
		}
		else if (choice == 2) {
			cout<<"manual";
			final = 1;
		}
		else if (choice == 3) {
			cout << "walkthrough";
			final = 1;
		}
		else {
			cout << "please choose a number";
		}
	}
	return final;
}


menu::~menu()
{
}

