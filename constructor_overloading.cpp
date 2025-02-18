#include <iostream> // iostream allows input from keyboard and output to screen
using namespace std; // std contains all standard C++ libraries

// Creating a class
class Student {
private:
    int semester;
    string name;
    int no_of_subjects;
    float total_marks;

public:
    // Default constructor (no arguments)
    Student() { 
        name = "Unknown"; // Default name
        semester = 0; // Default semester
        no_of_subjects = 0; // Default number of subjects
        total_marks = 0.0; // Default total marks
    }

    // Constructor with name and semester
    Student(string n, int sem) { 
        name = n; 
        semester = sem; 
        no_of_subjects = 0; // Default subjects
        total_marks = 0.0; // Default marks
    }

    // Constructor with all details
    Student(string n, int sem, int subjects, float marks) { 
        name = n; 
        semester = sem; 
        no_of_subjects = subjects; 
        total_marks = marks; // All values initialized
    }

    // Function to calculate average marks
    float getAverage() { 
        return (no_of_subjects > 0) ? total_marks / no_of_subjects : 0;
    }

    // Function to display student details
    void display() { 
        cout << "Name: " << name << ", Semester: " << semester 
             << ", Subjects: " << no_of_subjects 
             << ", Total Marks: " << total_marks 
             << ", Average: " << getAverage() << endl;
    }
};

int main() { // main() function with int return type
    // Creating objects using different constructors
    Student s1; // Calls default constructor
    Student s2("Sai Preetam", 3); // Calls constructor with name and semester
    Student s3("Sai Pavan", 5, 6, 480.0); // Calls constructor with all details

    // Display student details
    cout << "Student 1: "; // Prints Student 1 details
    s1.display();
    cout << "Student 2: "; // Prints Student 2 details
    s2.display();
    cout << "Student 3: "; // Prints Student 3 details
    s3.display();

    return 0; // Returns 0 to indicate successful execution
}
