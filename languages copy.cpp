#include <iostream> // iostream allows input and output operations.
using namespace std;

class languages { // Creating a class named 'languages'.
    string language;
    double speakers;
    string country;

public:
    // Member function to set language details using parameters
    void set(string language_name, double language_speakers, string language_country) {
        language = language_name;   // Assign parameter value to language.
        speakers = language_speakers; // Assign parameter value to speakers.
        country = language_country;   // Assign parameter value to country.
    }

    // Member function to display language details
    void display() const {
        cout << endl;
        cout << "Language: " << language << endl; // Output the language name.
        cout << "Country: " << country << endl;   // Output the country.
        cout << "Speakers: " << speakers << endl; // Output the number of speakers.
    }
};

int main() { // In C++, main() always has return type of int.
    languages l1, l2, l3; // Creating objects of the 'languages' class.

    // Setting language details using parameters
    l1.set("English", 30000000, "USA");
    l2.set("Mandarin", 900000, "China");
    l3.set("Telugu", 3000000, "India");

    // Displaying language details
    l1.display();
    l2.display();
    l3.display();

    return 0; 
};
