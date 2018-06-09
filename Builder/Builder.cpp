#include "stdafx.h"
#include "Student.h"

Student::Builder::Builder() {
	target = new Student;
}

Student::Builder* Student::Builder::setId(int id) {
	target->id = id;
	return this;
}
Student::Builder* Student::Builder::setName(string name) {
	target->name = name;
	return this;
}

Student::Builder* Student::Builder::setPassword(string password) {
	target->password = password;
	return this;
}

Student::Builder* Student::Builder::setGender(string gender) {
	target->gender = gender;
	return this;
}

Student::Builder* Student::Builder::setAddress(string address) {
	target->address = address;
	return this;
}

Student* Student::Builder::build() {
	return new Student(target);
}