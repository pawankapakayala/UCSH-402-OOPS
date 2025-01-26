#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std;//this std has all the standard libraries of c++
int min_population=100;//global variable declared and defined
class animals//creating a class
{
    string name;
    float population;
    public:
        int animal_det(string name, int population, int min_population){//member functios declaring
            if(population<min_population){
                cout<<"Animal with min population: "<<name<<" - "<<population<<endl;//cout prints the output stream of bits on screen
            }
            return 0;
        }

};

int main(){// In C++, main( )always has return type of int.
    int min_population=50;
    int m1;
    animals a1, a2;//creating an object...memory is alocated here
    m1=a1.animal_det("Lion", 40, min_population);
    int m2=a2.animal_det("Tiger", 60, min_population);//declaring the vriable when required
    return 0;
}