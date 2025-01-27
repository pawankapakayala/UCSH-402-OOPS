#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std;//this std has all the standard libraries of c++
class student//creating a class
{
    public:
        int getAverage(string name, int no_of_subjects, int total_marks) { // Function to calculate average marks
        return total_marks / no_of_subjects;
    }
};

int main(){// In C++, main( )always has return type of int.
    student s1;//creating an object...memory is alocated here
    int a1;
    a1=s1.getAverage("pawan",5,600);
    cout<<"Average Marks: "<<a1<<endl;
    int a2=s1.getAverage("kalyan",6,700);//declaring the vriable when required
    cout<<"Average Marks: "<<a2<<endl;
}