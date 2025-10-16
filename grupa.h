#pragma once
#include <string>
#include <vector>
#include "student.h"
using namespace std;

class Grupa {
    string groupName;
    string specialization;
    vector<Student*> students;

public:
    Grupa();
    Grupa(string groupName, string specialization);
    ~Grupa();

    void setGroupName(string groupName);
    string getGroupName();

    void setSpecialization(string specialization);
    string getSpecialization();

    void addStudent(Student* student);
    void outputStudent();

    friend ostream& operator<<(ostream& os, const Grupa& grupa);
};
