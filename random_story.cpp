#include "pch.h"
#include "random_story.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <fstream>
using namespace std;


random_story::random_story()
{
	lname = "Recian";
	fname = "Greg";
	age = 45;
}

void random_story::chacater(int old, string first, string last){
	int num;
	int gen;
	string file = "male_names.txt";
	string file2 = "female_names.txt";
	srand(time(NULL));
	gen = rand() % 2+1;
	num = rand() % 20 + 1;
	if (gen == 1) {
		first = file_read(file, num, first);
		cout <<"You will be a male named: "<< first;
	}
	else if (gen == 2) {
		first = file_read(file2, num, first);
		cout <<"You will be a girl named: "<< first;
	}
}

string random_story::file_read(string name, int num, string name2) {
	ifstream file;
	file.open(name);
	if (file.is_open()) {
		while (!file.eof()) {
			for (int i = 0; i < num; i++) {
				file >> name2;
			}
			break;
		}
	}
	else {
		cout << "could not open file"<<endl;
	}
	return name2;
}

random_story::~random_story()
{
}


