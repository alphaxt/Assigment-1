// header file included
#include "student.h"

// default constructor using scope resolution operator :: as it is outside the class
student::student()
{
    name = "ahmed";
    age = 19;
    rollNum = "l1f2445";
    gpa = 3.8;
}

// parameterized constructor takes parameters
student::student(string n, int a, string r, float c)
{
    name = n;
    age = a;
    rollNum = r;
    gpa = c;
}

// setter and getter functions because data members are private
void student::setName(string n)
{
    name = n;
}
void student::setAge(int a)
{
    age = a;
}
void student::setRollNum(string r)
{
    rollNum = r;
}
void student::setgpa(float c)
{
    gpa = c;
}


string student::getName()
{
    return name;
}
int student::getAge()
{
    return age;
}
string student::getRollNum()
{
    return rollNum;
}
float student::getgpa()
{
    return gpa;
}

// display function to display student information
void student::displayInfo() {
    cout << " ---------------------------- \n";

    cout << "Name: " << name << " | Age: " << age << " | Roll No: " << rollNum
        << " | GPA: " << gpa << endl;
}

// grade display function
void student::displayGrade() {

    char grade;

    if (gpa >= 3.7) {
        grade = 'A';
    }
    else if (gpa >= 3.0) {
        grade = 'B';
    }
    else if (gpa >= 2.0) {
        grade = 'C';
    }
    else if (gpa >= 1.0) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    cout << "Grade: " << grade << endl;
}

// destructor to free the memory
student::~student() {
    cout << "An object of student class is destroyed." << name << endl;
}