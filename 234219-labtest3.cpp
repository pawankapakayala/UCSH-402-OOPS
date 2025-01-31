#include<iostream>//iostream allows you to read from files and the keyboard, and to write to files and the display
using namespace std;//this std has all the standard libraries of C++

class Programmer{
    public:
        int G, P, I;//variables to store the marks of graduation, post-graduation and interview

        void set();//member function declaration

    };

inline void Programmer::set(){//function defining
    cout << "Enter Graduation marks (60-99):  ";//cout prints the output strem of bits on screen
    cin >> G; //cin reads the input stream of bits from the keyboard
    cout << "Enter Post-graduation marks (60-99):  ";//cout prints the output strem of bits on screen
    cin >> P; //cin reads the input stream of bits from the keyboard
    cout << "Enter Interview marks (0-10):  ";//cout prints the output strem of bits on screen
    cin >> I; //cin reads the input stream of bits from the keyboard
};

int Sum(int a, int b){//sum function to calculate the sum of two integers passed as parameters
    return a+b;
}

bool isSelected(Programmer p1, Programmer p2){//function to check if the team is selected or not
    int sumG = Sum(p1.G, p2.G);//passing values as parameters to sum the graduation marks of both programmers
    int sumP = Sum(p1.P, p2.P);//passing values as parameters to sum the post-graduation marks of both programmers
    int sumI = Sum(p1.I, p2.I);//passing values as parameters to sum the interview marks of both programmers
    cout <<"---Total marks secured by the pair programmers is as follows---"<<endl;//cout prints the output strem of bits on screen
    cout << sumG <<"G "<< sumP <<"P "<< sumI <<"I "<<endl;//cout prints the output strem of bits on screen
    cout << "-------------------------------------------------------------" << endl;//cout prints the output strem of bits on screen
    if(sumG >= 150 && sumP >= 180 && sumI >= 9){//if condition to check the conditions for selection
        return true;
    }
    else{
        return false;
    }
}
        
int main(){// In C++, main( )always has return type of int.
    Programmer p1, p2;//creating objects for each programmer... memory is allocated here
    cout << "Enter details for Programmer 1:\n";//cout prints the output strem of bits on screen
    p1.set();
    cout << "Enter details for Programmer 2:\n";//cout prints the output strem of bits on screen
    p2.set();

    if(isSelected(p1, p2)==true){
        cout << "Team is Selected!" << endl;//cout prints the output strem of bits on screen
    }
    else{
        cout << "Team is Not Selected." << endl;//cout prints the output strem of bits on screen
    }
    return 0;
}
