#pragma once
#include <string>
#include "student.h"
using namespace std;

class Grupa {
	string groupName;
	string specialization;
	string ListOfStudents;
public:
	Grupa();
	Grupa(string groupName, string specialization, string ListOfStudents);
	void setGroupName(string groupName);
	string getGroupName();
	void setSpecialization(string specialization);
	string getSpecialization();
	void setListOfStudents(string ListOfStudents);
	string getListOfStudents();

	void addStudent(const Student& student);
	~Grupa();

	friend ostream& operator << (std::ostream& os, const Grupa& obj);
};