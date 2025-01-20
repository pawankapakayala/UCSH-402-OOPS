#include <iostream> // iostream allows input and output operations.
using namespace std;

class games { // Creating a class named 'games'.
    string game;
    int no_of_players;
    bool team_sport; // true for team sport, false otherwise

public:
    // Member function to set game details using parameters
    void set(string sport_name, int players, string is_team_sport) {
        game = sport_name; // Assign parameter value to game.
        no_of_players = players; // Assign parameter value to no_of_players.
        team_sport = (is_team_sport == "yes"); // Convert "yes" or "no" input to boolean.
    }

    // Member function to display game details
    void display() const {
        cout << "Sport Name: " << game << endl; // Output the sport name.
        cout << "Number of Players: " << no_of_players << endl; // Output number of players.
        cout << "Is it a Team Sport? " << (team_sport ? "Yes" : "No") << endl; // Output if it's a team sport.
    }
};

int main() { // In C++, main() always has a return type of int.
    games g1, g2, g3; // Creating objects of the 'games' class.

    // passing sport 1 details
    g1.set("Cricket", 11, "yes");

    // passing sport 2 details
    g2.set("Tennis", 2, "no");

    // Display details of sports
    cout << "\nSport 1 Details:" << endl;
    g1.display();

    cout << "\nSport 2 Details:" << endl;
    g2.display();

    return 0; 
};
