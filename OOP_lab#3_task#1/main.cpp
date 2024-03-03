#include <iostream>
#include <vector>
#include"Student.h"

using namespace std;


int main() {
    vector<Student*> students;
  
    students.push_back(new Student("Alice"));
    students[0]->addGrade(90);
    
    students.push_back(new Student("Bob"));

    students[1]->addGrade(78);
    
     // Display 
    for (const Student* student : students) {
        student->displayInfo();
    }
    
    for (Student* student : students) {
        delete student;
    }
    return 0;
}
