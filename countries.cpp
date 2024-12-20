#include <iostream>
using namespace std; // This std has all the standard libraries of C++

class countries {
    string name;
    float area;
    float population;
    float gdp;

public:
    void set() {
        cout << "Enter country name: ";
        cin >> name;
        cout << "Enter area in sq.km: ";
        cin >> area;
        cout << "Enter population: ";
        cin >> population;
        cout << "Enter GDP: ";
        cin >> gdp;
    }

    string getName() { return name; }
    float getArea() { return area; }
    float getPopulation() { return population; }
    float getGDP() { return gdp; }

    static void calculateMax(countries c1, countries c2, countries c3) {
        // Max population
        if (c1.population >= c2.population && c1.population >= c3.population)
            cout << "Country with max population: " << c1.name << c1.population << endl;
        else if (c2.population >= c1.population && c2.population >= c3.population)
            cout << "Country with max population: " << c2.name << c2.population << endl;
        else
            cout << "Country with max population: " << c3.name << c3.population << endl;

        // Max area
        if (c1.area >= c2.area && c1.area >= c3.area)
            cout << "Country with max area: " << c1.name << c1.area << endl;
        else if (c2.area >= c1.area && c2.area >= c3.area)
            cout << "Country with max area: " << c2.name << c2.area <<endl;
        else
            cout << "Country with max area: " << c3.name << c3.area << endl;

        // Max GDP
        if (c1.gdp >= c2.gdp && c1.gdp >= c3.gdp)
            cout << "Country with max GDP: " << c1.name << c1.gdp << endl;
        else if (c2.gdp >= c1.gdp && c2.gdp >= c3.gdp)
            cout << "Country with max GDP: " << c2.name << c2.gdp << endl;
        else
            cout << "Country with max GDP: " << c3.name << c3.gdp << endl;
    }
};

int main() {
    countries c1, c2, c3;

    // user input for countries
    cout << "Enter details for Country 1:" << endl;
    c1.set();
    cout << endl;

    cout << "Enter details for Country 2:" << endl;
    c2.set();
    cout << endl;

    cout << "Enter details for Country 3:" << endl;
    c3.set();
    cout << endl;

    // Calculate and display the maximum values
    cout << "Comparing Countries..." << endl;
    countries::calculateMax(c1, c2, c3);

    return 0;
};
