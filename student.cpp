#include <iostream>
using namespace std;//this std has all the standard libraries of c++
class student
{
    int semester;
    string name;
    int no_of_subjects;
    float total_marks;
    public:
        void set(){//member function
            cout<<"Enter your name:";
            cin>>name;
            cout<<"Enter semester:";
            cin>>semester;
            cout<<"No. of subjects:";
            cin>>no_of_subjects;
            cout<<"Total marks secured:";
            cin>>total_marks; 
        }
        float getAverage() { // Function to calculate average marks
        return total_marks / no_of_subjects;
    }

    void displayAverage() { // Function to display average marks
        cout << "Average marks of " << name << ": " << getAverage() <<endl;
    }

};

int main(){
    student s1, s2, s3;

    //Input data from user
    cout<<"Enter student 1 details:"<<endl;
    s1.set();
    cout<<"Enter student 2 details:"<<endl;
    s2.set();
    cout<<"Enter student 3 details:"<<endl;
    s3.set();
    // Display average marks and complex numbers
    cout << "\nDisplaying average marks of student 1:" << endl;
    s1.displayAverage();
    s2.displayAverage();
    s3.displayAverage();

};