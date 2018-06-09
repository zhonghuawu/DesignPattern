// Builder.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Student.h"

using std::cout;
using std::endl;

int main()
{
	Student::Builder* builder = new Student::Builder;
	Student * stu = builder->setId(12345)->setName("huaa")->setPassword("huaa1234")->setGender("male")->setAddress("shanghai")->build();
	cout << stu->toString().c_str() << endl;
	cout << *stu << endl;
	cout << string(*stu).c_str() << endl;
    return 0;
}

