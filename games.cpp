#include <iostream>//iostreams which allow you to read from files and the keyboard, and to write to files and the display
using namespace std;

class games {//creating a class
    string game;
    int no_of_players;
    bool team_sport; // true for team sport, false otherwise

public:
    void set() { // Member function to set game details
        cout << "Enter sport name: ";//cout prints the output stream of bits on screen
        cin >> game;//cin belongs to input stream class
        cout << "Enter no. of players: ";//cout prints the output stream of bits on screen
        cin >> no_of_players;//cin belongs to input stream class

        string team_sport_input;
        cout << "Team sport (yes/no): ";//cout prints the output stream of bits on screen
        cin >> team_sport_input;//cin belongs to input stream class
        // Convert "yes" or "no" input to boolean
        team_sport = (team_sport_input == "yes");
    }

    void display() { // Member function to display game details
        cout << "Sport Name: " << game << endl;
        cout << "Number of Players: " << no_of_players << endl;
        cout << "Is it a Team Sport? " << (team_sport ? "Yes" : "No") << endl;
    }
};

int main() {// In C++, main( )always has return type of int.
    games g1, g2, g3;//creating an object...memory is alocated here

    // Take input from user for sports
    cout << "Enter sport 1 details:" << endl;//cout prints the output stream of bits on screen
    g1.set();
    cout << "Enter sport 2 details:" << endl;//cout prints the output stream of bits on screen
    g2.set();
    cout << "Enter sport 3 details:" << endl;//cout prints the output stream of bits on screen
    g3.set();

    // Display details of sports
    cout << "\nSport 1 Details:" << endl;//cout prints the output stream of bits on screen
    g1.display();
    cout << "\nSport 2 Details:" << endl;//cout prints the output stream of bits on screen
    g2.display();
    cout << "\nSport 3 Details:" << endl;//cout prints the output stream of bits on screen
    g3.display();

    return 0;
}
