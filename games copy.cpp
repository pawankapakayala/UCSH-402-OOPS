#include <iostream> // iostream allows input and output operations.
using namespace std;
int min_players = 2; // Global variable declared and defined.
class games { // Creating a class named 'games'.
public:
    int sport(string game, int players, string team) { // Function to set the details of the sports.
        int min_players = (min_players > players)? min_players : players; // Local Variable with the same name declared and defined.
        return min_players; // Returning the minimum number of players.
    }
    
};

int main() { // In C++, main() always has a return type of int.
    int min_players = 1;//Local Variable with the same name declared and defined
    games g1; // Creating objects of the 'games' class.
    int a = g1.sport("Cricket", 11, "Yes"); // variable declaration when required.
    cout << a << endl; // cout prints the output stream of bits on the screen.
    cout << min_players << endl; // Printing the local variable.
    cout << ::min_players << endl; // Printing the global variable
    return 0; 
}
