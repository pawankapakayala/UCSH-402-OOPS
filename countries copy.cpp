#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std; // This std has all the standard libraries of C++

class countries {//creating a class
    string name;
    float area;
    float population;
    float gdp;

public:
    void set();//member function declaring

    string getName() { return name; }
    float getArea() { return area; }
    float getPopulation() { return population; }
    float getGDP() { return gdp; }

    static void calculateMax(countries c1, countries c2, countries c3) {
        // Max population
        if (c1.population >= c2.population && c1.population >= c3.population)
            cout << "Country with max population: " << c1.name << c1.population << endl;//cout prints the output stream of bits on screen
        else if (c2.population >= c1.population && c2.population >= c3.population)
            cout << "Country with max population: " << c2.name << c2.population << endl;//cout prints the output stream of bits on screen
        else
            cout << "Country with max population: " << c3.name << c3.population << endl;//cout prints the output stream of bits on screen

        // Max area
        if (c1.area >= c2.area && c1.area >= c3.area)
            cout << "Country with max area: " << c1.name << c1.area << endl;//cout prints the output stream of bits on screen
        else if (c2.area >= c1.area && c2.area >= c3.area)
            cout << "Country with max area: " << c2.name << c2.area <<endl;//cout prints the output stream of bits on screen
        else
            cout << "Country with max area: " << c3.name << c3.area << endl;//cout prints the output stream of bits on screen

        // Max GDP
        if (c1.gdp >= c2.gdp && c1.gdp >= c3.gdp)
            cout << "Country with max GDP: " << c1.name << c1.gdp << endl;//cout prints the output stream of bits on screen
        else if (c2.gdp >= c1.gdp && c2.gdp >= c3.gdp)
            cout << "Country with max GDP: " << c2.name << c2.gdp << endl;//cout prints the output stream of bits on screen
        else
            cout << "Country with max GDP: " << c3.name << c3.gdp << endl;//cout prints the output stream of bits on screen
    }
};

inline void countries::set(){//member function defining
    cout << "Enter country name: ";//cout prints the output stream of bits on screen
    cin >> name;//cin belongs to input stream class
    cout << "Enter area in sq.km: ";//cout prints the output stream of bits on screen
    cin >> area;//cin belongs to input stream class
    cout << "Enter population: ";//cout prints the output stream of bits on screen
    cin >> population;//cin belongs to input stream class
    cout << "Enter GDP: ";//cout prints the output stream of bits on screen
    cin >> gdp;//cin belongs to input stream class
};

int main() {// In C++, main( )always has return type of int.
    countries c1, c2, c3;//creating an object...memory is alocated here

    // user input for countries
    cout << "Enter details for Country 1:" << endl;//cout prints the output stream of bits on screen
    c1.set();
    cout << endl;

    cout << "Enter details for Country 2:" << endl;//cout prints the output stream of bits on screen
    c2.set();
    cout << endl;

    cout << "Enter details for Country 3:" << endl;//cout prints the output stream of bits on screen
    c3.set();
    cout << endl;

    // Calculate and display the maximum values
    cout << "Comparing Countries..." << endl;//cout prints the output stream of bits on screen
    countries::calculateMax(c1, c2, c3);

    return 0;
};
