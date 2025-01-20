#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std;//this std has all the standard libraries of c++
class student//creating a class
{
    int semester;
    string name;
    int no_of_subjects;
    float total_marks;
    public:
        void set(){
            cout<<"Enter your name:";//cout prints the output stream of bits on screen
            cin>>name;//cin belongs to input stream class
            cout<<"Enter semester:";//cout prints the output stream of bits on screen
            cin>>semester;//cin belongs to input stream class
            cout<<"No. of subjects:";//cout prints the output stream of bits on screen
            cin>>no_of_subjects;//cin belongs to input stream class
            cout<<"Total marks secured:";//cout prints the output stream of bits on screen
            cin>>total_marks;//cin belongs to input stream class
        };//declaring the function
        float getAverage() { // Function to calculate average marks
        return total_marks / no_of_subjects;
    }

    void displayAverage() { // Function to display average marks
        cout << "Average marks of " << name << ": " << getAverage() <<endl;
    }

};

int main(){// In C++, main( )always has return type of int.
    student s1, s2, s3;//creating an object...memory is alocated here

    //Input data from user
    cout<<"Enter student 1 details:"<<endl;//cout prints the output stream of bits on screen
    s1.set();
    cout<<"Enter student 2 details:"<<endl;//cout prints the output stream of bits on screen
    s2.set();
    cout<<"Enter student 3 details:"<<endl;//cout prints the output stream of bits on screen
    s3.set();
    // Display average marks and complex numbers
    cout << "\nDisplaying average marks of student 1:" << endl;
    s1.displayAverage();
    cout << "\nDisplaying average marks of student 2:" << endl;
    s2.displayAverage();
    cout << "\nDisplaying average marks of student 3:" << endl;
    s3.displayAverage();

};