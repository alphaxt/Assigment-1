#include "student.h"

int main() {
    // create objects of student class of default constuctor
    student s1;
    cout << " Student Information \n";
    s1.displayInfo();
    s1.displayGrade();
    
    // object for paarameterized constructor
    student s2("Muhammad", 18, "l1f24bsds0010", 2.5);
    s2.displayInfo();
    s2.displayGrade();
    
    // object for setter and getter functions 
    student s3;
    s3.setName("Arslan");
    s3.setAge(20);
    s3.setRollNum("l1f24bscs0011");
    s3.setgpa(3.0);
    s3.displayInfo();
    s3.displayGrade();

    // another object for parameterized constructor
    student s4("danish", 19, "l1f24bsd0023", 3.3);
    s4.displayInfo();
    s4.displayGrade();

    cout << " ---------------------------- \n";

    return 0;
}