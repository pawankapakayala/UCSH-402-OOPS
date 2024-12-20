#include <iostream>
using namespace std;//this std has all the standard libraries of c++
class animals
{
    string name;
    float population;
    public:
        void set(){//member functio
            cout<<"Enter animal name:";
            cin>>name;
            cout<<"Enter population:";
            cin>>population;
        }

        float getPopulation() { return population; }
        static void minPopulation(animals a1, animals a2, animals a3){
            if (a1.population <= a2.population && a1.population <= a3.population)
            cout << "Animal with min population: " << a1.name <<"-"<< a1.population << endl;
        else if (a2.population <= a1.population && a2.population <= a3.population)
            cout << "Animal with min population: " << a2.name <<"-"<<a2.population << endl;
        else
            cout << "Animal with min population: " << a3.name <<"-"<<a3.population << endl;

        }

};

int main(){
    animals a1, a2, a3;

    cout<<"Animal 1:"<<endl;
    a1.set();
    cout << endl;
    cout<<"Animal 2:"<<endl;
    a2.set();
    cout << endl;
    cout<<"Animal 3:"<<endl;
    a3.set();
    cout << endl;

    cout<<"Min population"<<endl;
    animals::minPopulation(a1,a2,a3);

    return 0;
};