#pragma once
#include <string>
#include <vector>
#include "student.h"
using namespace std;

class Grupa {
	string groupName;
	string specialization;
	vector <Student*> students;
public:
	Grupa();
	Grupa(string groupName, string specialization);
	void setGroupName(string groupName);
	string getGroupName();
	void setSpecialization(string specialization);
	string getSpecialization();
	void addStudent(Student* student);
	void outPutStudent(string groupName, string specialization);
	Grupa(const Student& student);
	~Grupa();

	friend ostream& operator << (std::ostream& os, const Grupa& student);
};
