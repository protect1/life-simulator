#pragma once
#include <string>
using namespace std;

class random_story
{
public:
	random_story();
	~random_story();
	int age;
	string fname;
	string lname;
	bool male;
	void chacater(int old, string first, string last);
	string file_read(string name, int num, string name2);

};

