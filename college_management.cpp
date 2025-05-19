#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// ---------------------- Class Definitions ------------------------

class Student {
public:
    int id;
    string name;
    string course;

    void input() {
        cout << "Enter Student ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Assigned Course: ";
        getline(cin, course);
    }

    void display() const {
        cout << "ID: " << id << ", Name: " << name << ", Course: " << course << endl;
    }
};

class Faculty {
public:
    int id;
    string name;
    string subject;

    void input() {
        cout << "Enter Faculty ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Faculty Name: ";
        getline(cin, name);
        cout << "Enter Subject Taught: ";
        getline(cin, subject);
    }

    void display() const {
        cout << "ID: " << id << ", Name: " << name << ", Subject: " << subject << endl;
    }
};

// ---------------------- Function Prototypes ------------------------

void addStudent();
void viewStudents();
void addFaculty();
void viewFaculty();
void generateReports();

// ---------------------- Main Menu ------------------------

int main() {
    int choice;
    do {
        cout << "\n====== College Management System ======\n";
        cout << "1. Add Student\n";
        cout << "2. View Students\n";
        cout << "3. Add Faculty\n";
        cout << "4. View Faculty\n";
        cout << "5. Generate Academic Report\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: addFaculty(); break;
            case 4: viewFaculty(); break;
            case 5: generateReports(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}

// ---------------------- Function Definitions ------------------------

void addStudent() {
    Student s;
    s.input();

    ofstream file("students.txt", ios::app);
    file << s.id << "," << s.name << "," << s.course << "\n";
    file.close();

    cout << "Student record added successfully.\n";
}

void viewStudents() {
    ifstream file("students.txt");
    string line;
    cout << "\n--- Student Records ---\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void addFaculty() {
    Faculty f;
    f.input();

    ofstream file("faculty.txt", ios::app);
    file << f.id << "," << f.name << "," << f.subject << "\n";
    file.close();

    cout << "Faculty record added successfully.\n";
}

void viewFaculty() {
    ifstream file("faculty.txt");
    string line;
    cout << "\n--- Faculty Records ---\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void generateReports() {
    cout << "\nGenerating Academic Reports...\n";

    cout << "\n--- Student Report ---\n";
    viewStudents();

    cout << "\n--- Faculty Report ---\n";
    viewFaculty();
}
