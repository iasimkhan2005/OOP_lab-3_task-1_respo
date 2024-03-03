#pragma once

using namespace std;
class Student {
public:
    string name;
    vector <int>* grades;
    vector <string>* sub_names;

    // Constructor to initialize the student with a name
    Student(string studentName) : name(studentName) {
        grades = new vector<int>();
        sub_names = new vector<string>();
    }
    // Destructor to release memory for grades
    ~Student() {
        delete grades;
    }
    // Function to add a grade to the student
    void addGrade(string sub_name, int grade) {
        grades->push_back(grade);
        sub_names->push_back(sub_name);
    }

    // Function to display the student's name and grades
    void displayInfo() const {
        string sub_name;
        cout << "Student: " << name << "\nGrades: ";
        for (int grade : *grades) {
            cout << grade << " in " << sub_name << " ";
        }
        cout << "\n";
    }
};


