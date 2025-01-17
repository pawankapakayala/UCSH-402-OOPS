#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std;//this std has all the standard libraries of c++
class languages//creating a class
{
    string language;
    double speakers;
    string country;
    public:
        void set(){//member function
            cout<<"Enter language:";//cout prints the output stream of bits on screen
            cin>>language;//cin belongs to input stream class
            cout<<"Country:";
            cin>>country;//cin belongs to input stream class
            cout<<"No. of speakers:";//cout prints the output stream of bits on screen
            cin>>speakers;//cin belongs to input stream class
        }
        void display(){//member functions
        cout<<endl;
		cout<<"Language :"<<language<<endl;//cout prints the output stream of bits on screen
		cout<<"Country:"<<country<<endl;//cout prints the output stream of bits on screen
        cout<<"Speakers"<<speakers<<endl;//cout prints the output stream of bits on screen
	}
};
int main(){// In C++, main( )always has return type of int.
    languages l1, l2, l3;//creating an object...memory is alocated here

    //User input
    cout<<"Enter language 1 details:"<<endl;//cout prints the output stream of bits on screen
    l1.set();
    cout<<"Enter language 2 details:"<<endl;//cout prints the output stream of bits on screen
    l2.set();
    cout<<"Enter language 3 details:"<<endl;//cout prints the output stream of bits on screen
    l3.set();

    l1.display();
    l2.display();
    l3.display();

    return 0;
};

