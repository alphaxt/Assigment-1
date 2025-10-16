#pragma once

#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    string name;
    int age;
    string rollNum;
    float gpa;

public:
    student();

    student(string n, int a, string r, float c);

    ~student();

    void setName(string n);
    void setAge(int a);
    void setRollNum(string r);
    void setgpa(float c);

    string getName();
    int getAge();
    string getRollNum();
    float getgpa();

    void displayInfo();

    void displayGrade();
};
