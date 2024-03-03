#pragma once

using namespace std;
class Student {
public:
    string name;
    vector <int>* grades;

    Student(string studentName) : name(studentName) {
        grades = new vector<int>();
        
    }
    
    ~Student() {
        delete grades;
    }
    
    void addGrade( int grade) {
        grades->push_back(grade);
      
    }

    void displayInfo() const {
        string sub_name;
        cout << "Student: " << name << "\nGrades: ";
        for (int grade : *grades) {
            cout << grade << " ";
        }
        cout << "\n";
    }
};


