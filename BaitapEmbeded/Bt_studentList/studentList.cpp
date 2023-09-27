#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student {
public:
    int ID;
    string name;
    int age;
    string gender;
    float physicsScore;
    float mathScore;
    float chemistryScore;

    Student(int id, const string& n, int a, const string& g, float phy, float math, float chem)
        : ID(id), name(n), age(a), gender(g), physicsScore(phy), mathScore(math), chemistryScore(chem) {}

    void displayInfo() const {
        cout << "Name: " << name << "\nAge: " << age << "\nGender: " << gender
             << "\nPhysics Score: " << physicsScore << "\nMath Score: " << mathScore << "\nChemistry Score: " << chemistryScore << "\n\n";
    }

    bool hasName(const string& targetName) const {
        return name == targetName;
    }
};

class StudentDatabase {
private:
    vector<Student> students;

public:
    void addStudent() {
        int id, age;
        string name, gender;
        float physics, math, chemistry;

        cout << "Enter student ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter student age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter student gender: ";
        getline(cin, gender);
        cout << "Enter physics score: ";
        cin >> physics;
        cout << "Enter math score: ";
        cin >> math;
        cout << "Enter chemistry score: ";
        cin >> chemistry;

        students.push_back(Student(id, name, age, gender, physics, math, chemistry));
    }

    void searchStudentByName(const string& name) {
        bool found = false;
        for (const Student& student : students) {
            if (student.hasName(name)) {
                cout << "Student Found:\n";
                student.displayInfo();
                found = true;
            }
        }

        if (!found) {
            cout << "Student with name '" << name << "' not found." << endl;
        }
    }
};

int main() {
    StudentDatabase database;
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1. Add Student\n";
        cout << "2. Search Student by Name\n";
        cout << "3. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            database.addStudent();
            break;
        case 2: {
            string name;
            cin.ignore();
            cout << "Enter student name to search: ";
            getline(cin, name);
            database.searchStudentByName(name);
            break;
        }
        case 3:
            cout << "Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 3);

    return 0;
}
