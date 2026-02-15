#include "student.h"
#include <iostream>


Student::Student()
{

}

Student::Student(string, int)
{
    name = n;
    age = a;
}

void Student::setAge(int a)
{

    age = a;
}

void Student::setName(string n)
{

    name = n;
}

string Student::getName()
{

    return name;
}

int Student::getAge()
{

    return age;
}

void Student::printStudentInfo()
{

    cout << "Name: " << name << " Age: " << age << endl;
}
