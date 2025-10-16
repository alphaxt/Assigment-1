#pragma once

#include <iostream>
#include <string>

using namespace std;

// class declaration of student

class student
{
    // data members private
private:
    string name;
    int age;
    string rollNum;
    float gpa;

public:
    // default constructor
    student();
    // parameterized constructor
    student(string n, int a, string r, float c);
    // destructor the student  using ~
    ~student();
    
    // setter and getter functions because data members are private
    void setName(string n);
    void setAge(int a);
    void setRollNum(string r);
    void setgpa(float c);

    string getName();
    int getAge();
    string getRollNum();
    float getgpa();

    // display functions
    void displayInfo();

    // display grade function
    void displayGrade();
};