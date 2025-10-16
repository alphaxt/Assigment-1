#include "student.h"

int main() {
    student s1;
    s1.displayInfo();
    s1.displayGrade();

student s2("Muhammad", 18, "l1f24bsds0010", 2.5);
    s2.displayInfo();   
    s2.displayGrade();

    student s3;
    s3.setName("Arslan");
    s3.setAge(20);
    s3.setRollNum("l1f24bscs0011");
    s3.setgpa(3.0);
    s3.displayInfo();
    s3.displayGrade();

    return 0;
}