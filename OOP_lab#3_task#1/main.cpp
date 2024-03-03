#include <iostream>
#include <vector>
#include"Student.h"

using namespace std;


int main() {
    // Create a vector to store student objects
    vector<Student*> students;
    cout << "check";
    // Add students and their grades
    students.push_back(new Student("Alice"));
    students[0]->addGrade("Eng", 90);
    /*students[0]->addGrade(85);*/

    students.push_back(new Student("Bob"));

    students[1]->addGrade("OOP", 78);
    /* students[1]->addGrade(92);*/

     // Display student information
    for (const Student* student : students) {
        student->displayInfo();
    }
    // Cleanup: Release memory for students
    for (Student* student : students) {
        delete student;
    }

    return 0;
}
