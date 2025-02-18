#include <iostream> // iostream allows input from keyboard and output to screen
using namespace std; // std contains all standard C++ libraries

int totalStudents = 0; // Global variable to keep track of total students

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
        totalStudents++; // Increment global variable
    }

    // Constructor with name and semester
    Student(string name, int semester) { 
        this->name = name; // Using local variable to set class variable
        this->semester = semester; 
        no_of_subjects = 0; // Default subjects
        total_marks = 0.0; // Default marks
        totalStudents++; // Increment global variable
    }

    // Constructor with all details
    Student(string name, int semester, int no_of_subjects, float total_marks) { 
        this->name = name; // Using local variable to set class variable
        this->semester = semester; 
        this->no_of_subjects = no_of_subjects; 
        this->total_marks = total_marks; // All values initialized
        totalStudents++; // Increment global variable
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

    // Static function to display total students using global variable
    static void displayTotalStudents() {
        cout << "Total Students: " << totalStudents << endl; // Accessing global variable
    }
};

int main() { // main() function with int return type
    int totalStudents = 5; // Local variable (shadows global variable)

    // Creating objects using different constructors
    Student s1; // Calls default constructor
    Student s2("John", 3); // Calls constructor with name and semester
    Student s3("Alice", 5, 6, 480.0); // Calls constructor with all details

    // Display student details
    cout << "Student 1: "; // Prints Student 1 details
    s1.display();
    cout << "Student 2: "; // Prints Student 2 details
    s2.display();
    cout << "Student 3: "; // Prints Student 3 details
    s3.display();

    // Display local and global total students count
    cout << "\nLocal totalStudents: " << totalStudents << endl;
    cout << "Global totalStudents: " << ::totalStudents << endl; // Accessing global variable using ::

    return 0; // Returns 0 to indicate successful execution
}
