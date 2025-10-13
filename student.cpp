#include <iostream>
#include <string>
#include "student.h"
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
	cout << "input type: ";
	cin >> type;
}

Student::Student(string name, string surname, string patronymic, int numberZalBook, bool type) {
	this->name = name;
	this->surname = surname;
	this->patronymic = patronymic;
	this->numberZalBook = numberZalBook;
	this->type = type;
}

void Student::setSurname(string surname) { this->surname = surname; };

void Student::setName(string name) { this->name = name; };

void Student::setPatronymic(string patronymic) { this->patronymic = surname; };

void Student::setNumberZalBook(int numberZalBook) { this->numberZalBook = numberZalBook; };

void Student::setType(bool type) { this->type = type; };

string Student::getSurname() { return surname; };
string Student::getName() { return name; };
string Student::getPatronymic() { return surname; };
int Student::getNumberZalBook() { return numberZalBook; };
bool Student::getType() { return type; };

ostream& operator << (std::ostream& os, const Student& obj) {
	os << "Name: " << obj.name << "Surname: " << obj.surname << "Patronymic"
		<< obj.patronymic << "NumberZalBook: " << obj.numberZalBook << "Type: " << obj.type;
	return os;
}

Student::~Student() {

}

int main() {
	Student student1;
	Student student2("Marian", "Perchyshyn", "Patronymic", 12, true);
	Student student3 = student2;

	return 0;
}