#include <bits/stdc++.h>
using namespace std;

// Define the Student structure
struct Student {
    string fullname;
    int marks;
};

// Function to sort the vector of students in descending order of marks
void sortStudents(vector<Student>& students) {
    sort(students.begin(), students.end(), [](const Student &a, const Student &b) {
        return a.marks > b.marks; // Sort in descending order of marks
    });
}

int main() {
    int Sc;
    cout << "Enter student count: ";
    cin >> Sc;
    cin.ignore();  // Clear the newline character left in the buffer after cin >> Sc

    vector<Student> students;

    for (int i = 0; i < Sc; i++) {
        Student student;
        
        cout << "Enter fullname of student: ";
        getline(cin, student.fullname);  // Reads the full name with spaces

        cout << "Enter marks of student: ";
        cin >> student.marks;
        cin.ignore();  // Clear the newline character for the next getline

        students.push_back(student);  // Add student to the vector
    }

    cout << "Printing initial list:\n";
    for (const auto &student : students) {
        cout << "Student Name: " << student.fullname << " Marks: " << student.marks << endl;
    }

    // Sort the students by marks in descending order
    sortStudents(students);

    cout << "Printing sorted list in descending order of marks:\n";
    for (const auto &student : students) {
        cout << "Student Name: " << student.fullname << " Marks: " << student.marks << endl;
    }

    return 0;
}
