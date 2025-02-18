#include <iostream> // iostream allows input from keyboard and output to screen
using namespace std; // std contains all standard C++ libraries

// Creating a class
class Student {
private:
    string* name;  // Dynamically allocated name
    int* semester; // Dynamically allocated semester
    float* marks;  // Dynamically allocated marks

public:
    // Constructor with dynamic memory allocation
    Student(string n, int sem, float m) {
        name = new string(n);  // Allocating memory for name
        semester = new int(sem);  // Allocating memory for semester
        marks = new float(m);  // Allocating memory for marks
    }

    // Function to display student details
    void display() {
        cout << "Name: " << *name 
             << ", Semester: " << *semester 
             << ", Marks: " << *marks << endl;
    }

    // Destructor to free allocated memory
    ~Student() {
        delete name;
        delete semester;
        delete marks;
        cout << "Memory deallocated for " << *name << endl;
    }
};

int main() { 
    // Dynamically creating Student objects
    Student* s1 = new Student("John", 3, 85.5);
    Student* s2 = new Student("Alice", 5, 92.0);

    // Display student details
    cout << "Student 1: ";
    s1->display();
    cout << "Student 2: ";
    s2->display();

    // Free dynamically allocated memory
    delete s1;
    delete s2;

    return 0; 
}
