#include <iostream>
#include <string>
#include "student.h"
#include "group.h"
using namespace std;

Student::Student() {
    cout << "Input name: ";
    cin >> name;
    cout << "Input surname: ";
    cin >> surname;
    cout << "Input patronymic: ";
    cin >> patronymic;
    cout << "Input numberZalBook: ";
    cin >> numberZalBook;
    cout << "Input type: ";
    cin >> type;
}

Student::Student(string name, string surname, string patronymic, int numberZalBook, bool type) {
    this->name = name;
    this->surname = surname;
    this->patronymic = patronymic;
    this->numberZalBook = numberZalBook;
    this->type = type;
}

Student::Student(const Student& student) {
    name = student.name;
    surname = student.surname;
    patronymic = student.patronymic;
    numberZalBook = student.numberZalBook;
    type = student.type;
}

Student::~Student() {}

void Student::setName(string name) { this->name = name; }
string Student::getName() { return name; }

void Student::setSurname(string surname) { this->surname = surname; }
string Student::getSurname() { return surname; }

void Student::setPatronymic(string patronymic) { this->patronymic = patronymic; }
string Student::getPatronymic() { return patronymic; }

void Student::setNumberZalBook(int numberZalBook) { this->numberZalBook = numberZalBook; }
int Student::getNumberZalBook() { return numberZalBook; }

void Student::setType(bool type) { this->type = type; }
bool Student::getType() { return type; }

ostream& operator<<(ostream& os, const Student& student) {
    os << "Name: " << student.name
        << "\tSurname: " << student.surname
        << "\tPatronymic: " << student.patronymic
        << "\tNumberZalBook: " << student.numberZalBook;
	if (student.type) {
		os << "\tType: budget";
	}
	else {
		os << "\tType: contract";
	}
    return os;
}
