#pragma once

#include <iostream>

using std::string;
using std::ostream;

class Student {
private :
	int id;
	string name;
	string password;
	string gender;
	string address;
public :
	int getId() const;
	string getName() const;
	string getPassword() const;
	string getGender() const;
	string getAddress() const;

	string toString() const;
	operator string() const;
	friend ostream& operator<< (ostream& out, const Student stu);

private :
	Student();
	Student(const Student* origin);

public :
	class Builder {
	private :
		Student * target;
	public :
		Builder();
		Builder* setId(int _id);
		Builder* setName(string _name);
		Builder* setPassword(string _password);
		Builder* setGender(string _gender);
		Builder* setAddress(string _address);
		Student* build();
	};

};