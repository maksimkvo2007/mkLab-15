#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

struct Student{
    long long id;
    double score;
}

int main(){
    Student info[1000];
    int count = 0;
   
    ifstream inFile("210-lab-13-grades.txt"); // reads file
    while (inFile >> info[count].id >> info[count].score) {
        count++;
    }
    inFile.close();

    for (int i = 0; i < count - 1; i++) {
        int min = i;
        for (int j = i + 1; j < count; j++) {
            if (info[j].id < info[min].id) min = j;
        }
        // Swap
        Info temp = info[i];
        info[i] = info[min];
        info[min] = temp;
    }
}