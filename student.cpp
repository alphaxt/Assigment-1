#include "student.h"

student::student()
{
    name = "ahmed";
    age = 19;
    rollNum = "l1f2445";
    gpa = 3.5;
}

student::student(string n, int a, string r, float c)
{
    name = n;
    age = a;
    rollNum = r;
    gpa = c;
}

student::~student(){
    cout<< "An object of student class is destroyed." << endl;
}

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

void student::displayInfo() {
    cout << " ---------------------------- \n";
    cout << " Student Information \n";

    cout << "Name: " << name << " | Age: " << age << " | Roll No: " << rollNum
    << " | GPA: " << gpa << endl;
}

void student::displayGrade() {

    char grade;

    if (gpa >= 3.7) {
        grade = 'A';
    } else if (gpa >= 3.0) {
        grade = 'B';
    } else if (gpa >= 2.0) {
        grade = 'C';
    } else if (gpa >= 1.0) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Grade: " << grade << endl;
    cout << " ---------------------------- \n";
}