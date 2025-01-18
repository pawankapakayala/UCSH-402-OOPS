#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std;//this std has all the standard libraries of c++
class animals//creating a class
{
    string name;
    float population;
    public:
        void set();//member functios declaring
        float getPopulation() { return population; }
        static void minPopulation(animals a1, animals a2, animals a3){
            if (a1.population <= a2.population && a1.population <= a3.population)
            cout << "Animal with min population: " << a1.name <<"-"<< a1.population << endl;//cout prints the output stream of bits on screen
        else if (a2.population <= a1.population && a2.population <= a3.population)
            cout << "Animal with min population: " << a2.name <<"-"<<a2.population << endl;//cout prints the output stream of bits on screen
        else
            cout << "Animal with min population: " << a3.name <<"-"<<a3.population << endl;//cout prints the output stream of bits on screen

        }

};

inline void animals::set(){//function defining
    cout<<"Enter animal name:";//cout prints the output stream of bits on screen
    cin>>name;//cin belongs to input stream class
    cout<<"Enter population:";//cout prints the output stream of bits on screen
    cin>>population;//cin belongs to input stream class
};

int main(){// In C++, main( )always has return type of int.
    animals a1, a2, a3;//creating an object...memory is alocated here

    cout<<"Animal 1:"<<endl;//cout prints the output stream of bits on screen
    a1.set();
    cout << endl;
    cout<<"Animal 2:"<<endl;//cout prints the output stream of bits on screen
    a2.set();
    cout << endl;
    cout<<"Animal 3:"<<endl;//cout prints the output stream of bits on screen
    a3.set();
    cout << endl;

    cout<<"Min population"<<endl;//cout prints the output stream of bits on screen
    animals::minPopulation(a1,a2,a3);

    return 0;
};