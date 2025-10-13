#pragma once
#include <iostream>
#include <string>
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
	~Student();

	friend ostream& operator << (std::ostream& os, const Student& obj);

};