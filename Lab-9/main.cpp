#include <iostream> 
#include <fstream> 
#include <array> 
#include <vector>

using namespace std;

int main() {
    array<int, 30> scores;
    ifstream myFile("scores.txt");

    if (!myFile) {
        cout << "Could not open file!" << endl;
        return 0;
    }

    for (int i = 0; i < 30; i++){
        myFile >> scores[i];
    }
    myFile.close();

    cout << "Array Info\n";
    cout << "Size: " << scores.size() << endl;
    cout << "First: " << scores.front() << endl;
    cout << "Middle: " << scores.at(15) << endl;
    cout << "Last: " << scores.back() << endl;

    vector<int> grades;
    myFile.open("scores.txt");

    


}