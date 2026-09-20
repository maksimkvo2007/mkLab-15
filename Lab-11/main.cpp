#include <iostream>
#include <string>
using namespace std;

struct Player{
    string name;
    int thLevel;
    int numArmies;
    string* armies;
}

int main(){ //So far Idea is like a clash of clans theme if your familiar 
    int numPlayers;

    cout << "How many players? ";
    cin >> numPlayers;
    Player* clan = new Player[numPlayers];

    //filling the struct
    for (int i = 0; i < numPlayers; i++) {
        cout << "\nEnter players name: ";
        cin >> clan[i].name;

        cout << "Enter Town Hall Levels: ";
        cin >> clan[i].thLevel;

        cout << "Number of troops: "
    }
}