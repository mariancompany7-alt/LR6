#include <iostream>
#include "grupa.h"
#include <string>
using namespace std;

Grupa::Grupa() {

}

Grupa::Grupa(string groupName, string specialization, string ListOfStudents) {
	this->groupName = groupName;
	this->specialization = specialization;
	this->ListOfStudents = ListOfStudents;
}

Grupa::~Grupa() {

}

void Grupa::setGroupName(string groupName) { this->groupName = groupName; };
string Grupa::getGroupName() { return groupName; };
void Grupa::setSpecialization(string specialization) { this->specialization = specialization; };
string Grupa::getSpecialization() { return specialization; };
void Grupa::setListOfStudents(string ListOfStudents) { this->ListOfStudents = ListOfStudents; };
string Grupa::getListOfStudents() { return ListOfStudents; };

ostream& operator << (std::ostream& os, const Grupa& obj) {
	os << "GroupName: " << obj.groupName << "Specialization: " << obj.specialization << "ListOfStudents: "
		<< obj.ListOfStudents;
	return os;
}

