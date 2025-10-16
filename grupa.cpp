#include <iostream>
#include "group.h"
#include "student.h"
using namespace std;

Grupa::Grupa() {}

Grupa::Grupa(string groupName, string specialization) {
    this->groupName = groupName;
    this->specialization = specialization;
}

Grupa::~Grupa() {
 
}

void Grupa::setGroupName(string groupName) { this->groupName = groupName; }
string Grupa::getGroupName() { return groupName; }

void Grupa::setSpecialization(string specialization) { this->specialization = specialization; }
string Grupa::getSpecialization() { return specialization; }

void Grupa::addStudent(Student* student) {
    students.push_back(student);
}

void Grupa::outputStudent() {
    cout << "GroupName: " << groupName << "\tSpecialization: " << specialization << endl;
    for (size_t i = 0; i < students.size(); i++) {
        cout << "\tStudent " << i + 1 << ": " << *students[i] << endl;
    }
}

ostream& operator<<(ostream& os, const Grupa& grupa) {
    os << "GroupName: " << grupa.groupName << "\tSpecialization: " << grupa.specialization << endl;
    for (size_t i = 0; i < grupa.students.size(); i++) {
        os << "\tStudent " << i + 1 << ": " << *grupa.students[i] << endl;
    }
    return os;
}
