#pragma once
#include <string>
#include "group.h"
#include <iostream>
using namespace std;

class Student {
    string name;
    string surname;
    string patronymic;
    int numberZalBook;
    bool type;

public:
    Student();
    Student(string name, string surname, string patronymic, int numberZalBook, bool type);
    Student(const Student& student);
    ~Student();

    void setName(string name);
    string getName();

    void setSurname(string surname);
    string getSurname();

    void setPatronymic(string patronymic);
    string getPatronymic();

    void setNumberZalBook(int numberZalBook);
    int getNumberZalBook();

    void setType(bool type);
    bool getType();

    friend ostream& operator<<(ostream& os, const Student& student);
};
