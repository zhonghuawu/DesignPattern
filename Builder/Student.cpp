#include "stdafx.h"
#include "Student.h"
#include <sstream>

using std::string;
using std::stringstream;

Student::Student() {}
Student::Student(const Student* origin) {
	this->id = origin->id;
	this->name = origin->name;
	this->password = origin->password;
	this->gender = origin->gender;
	this->address = origin->address;
}

int Student::getId() const {
	return id;
}

string Student::getName() const {
	return name;
}

string Student::getPassword() const {
	return password;
}

string Student::getGender() const {
	return gender;
}

string Student::getAddress() const {
	return address;
}

string Student::toString() const {
	return string(*this);
}

Student::operator string() const
{
	stringstream ss;
	ss << "student: [id=" << id << ", name=" << name << ", password=" << password << ", gender=" << gender << ", address=" << address << "]";
	return ss.str();
}


ostream& operator<<(ostream& out, Student stu) {
	out << "student: [id=" << stu.id << ", name=" << stu.name << ", password=" << stu.password << ", gender=" << stu.gender << ", address=" << stu.address << "]";
	return out;
}