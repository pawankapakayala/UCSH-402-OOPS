#include <iostream>
using namespace std;

class games {
    string game;
    int no_of_players;
    bool team_sport; // true for team sport, false otherwise

public:
    void set() { // Member function to set game details
        cout << "Enter sport name: ";
        cin >> game;
        cout << "Enter no. of players: ";
        cin >> no_of_players;

        string team_sport_input;
        cout << "Team sport (yes/no): ";
        cin >> team_sport_input;
        // Convert "yes" or "no" input to boolean
        team_sport = (team_sport_input == "yes");
    }

    void display() { // Member function to display game details
        cout << "Sport Name: " << game << endl;
        cout << "Number of Players: " << no_of_players << endl;
        cout << "Is it a Team Sport? " << (team_sport ? "Yes" : "No") << endl;
    }
};

int main() {
    games g1, g2, g3;

    // Take input from user for sports
    cout << "Enter sport 1 details:" << endl;
    g1.set();
    cout << "Enter sport 2 details:" << endl;
    g2.set();
    cout << "Enter sport 3 details:" << endl;
    g3.set();

    // Display details of sports
    cout << "\nSport 1 Details:" << endl;
    g1.display();
    cout << "\nSport 2 Details:" << endl;
    g2.display();
    cout << "\nSport 3 Details:" << endl;
    g3.display();

    return 0;
}
