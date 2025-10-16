#include <iostream>
#include "grupa.h"
#include <string>
using namespace std;

Grupa::Grupa() {

}

Grupa::Grupa(string groupName, string specialization) {
	this->groupName = groupName;
	this->specialization = specialization;
}

Grupa::~Grupa() {

}

void Grupa::setGroupName(string groupName) { this->groupName = groupName; };
string Grupa::getGroupName() { return groupName; };
void Grupa::setSpecialization(string specialization) { this->specialization = specialization; };
string Grupa::getSpecialization() { return specialization; };

ostream& operator << (std::ostream& os, const Grupa& grupa) {
	os << "GroupName: " << grupa.groupName << "Specialization: " << grupa.specialization;
	for (int i = 0; i < grupa.students.size(); i++) {
		cout << "student: " << i + 1 << grupa.students[i] << endl;
	}
	return os;
}

void Grupa::outPutStudent(string groupName, string specialization) {
	cout << "GroupName: " << groupName << "Specialization: " << specialization;
	for (int i = 0; i < students.size(); i++) {
		cout << "student: " << i + 1 << *students[i] << endl;
	}
}

void Grupa::addStudent(Student* student) {
	students.push_back(student);
}

Grupa::Grupa(const Student& student) {
	
}
