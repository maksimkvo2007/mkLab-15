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
    string clanName;
    cout << "Clan Name: ";
    getline(cin, clanName);
    cout << "How many players? ";
    cin >> numPlayers;
    Player* clan = new Player[numPlayers];

    //filling the struct
    for (int i = 0; i < numPlayers; i++) {
        cout << "\nEnter players name: ";
        cin >> clan[i].name;

        cout << "Enter Town Hall Level: ";
        cin >> clan[i].thLevel;

        cout << "How many armys do they use: ";
        cin >> clan[i].numArmies; 

        clan[i].armies = new string[clan[i].numArmies];
        cin.ignores();

        for (int a = 0; a < clan[i].numArmies; a++){
            cout << "Army name: ";
            getline(cin, clan[i].armies[a]);
        }
    }
    cout << endl << clanName << " Roster: "; //display
    for (int i = 0; i < numPlayers; i++) {
        cout << clan[i].name << ", TH: " <<  clan[i].thLevel << endl;
        for (int a = 0; a < clan[i].numArmies; j++) {
            cout <<. "Army(" << a+1 << "): " << clan[i].armies[a] << endl;
        }
        cout << endl;
    }
    for (int i =  0; i < numPlayers; i++){
        delete[] clan[i].armies
    }
    delete[] clan;
}