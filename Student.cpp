#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int pStudentId, std::string pname) {
    studentId = pStudentId;
    name = pname;
}

// Display StudentId and Name
void Student::display() {
    cout << "Student ID is " << studentId << endl;
    cout << "Student name is : " << name << endl;
 }
