#include <iostream> 
#include <fstream> 
#include <array> 
#include <vector>

using namespace std;

int main() {
    array<int, 30> scores;
    ifstream myFile("scores.txt");

    for (int i = 0; i < 30; i++){
        myFile >> scores[i];
    }
    myFile.close();
}