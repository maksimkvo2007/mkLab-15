#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

struct Student{
    long long id;
    double score;
};

int main(){
    Student info[1000];
    int count = 0;
   
    ifstream inFile("210-lab-13-grades.txt"); // reads file
    while (inFile >> info[count].id >> info[count].score) {
        count++;
    }
    inFile.close();

    for (int i = 0; i < count - 1; i++) { //Ascending sort
        int min = i;
        for (int j = i + 1; j < count; j++) {
            if (info[j].id < info[min].id) min = j;
        }
        // Swap
        Student temp = info[i];
        info[i] = info[min];
        info[min] = temp;
    }

    ofstream outFile("210-lab-13-grades-sorted.txt");
    for (int i = 0; i < count; i++) {
        outFile << info[i].id << " " << info[i].score << "\n";
    }
    outFile.close();

    double sum = 0, varSum = 0;
    for (int i = 0; i < count; i++) sum += info[i].score;
    double mean = sum / count;

    for (int i = 0; i < count; i++) varSum += pow(info[i].score - mean, 2);
    double stdDev = sqrt(varSum / count);

    for (int i = 0; i < count - 1; i++) { //added extra sort
        int min = i;
        for (int j = i + 1; j < count; j++) {
            if (info[j].score < info[min].score) min = j;
        }
        Student temp = info[i];
        info[i] = info[min];
        info[min] = temp;
    }

    cout << "read " << count << " students\n";
    cout << "saved to file\n\n";
    
    cout << "stats:\n";
    cout << "min: " << info[0].score << " id " << info[0].id << "\n";
    cout << "max: " << info[count - 1].score << " id " << info[count - 1].id << "\n";
    cout << "mean: " << mean << "\n";
    cout << "median: " << info[count / 2].score << " id " << info[count / 2].id << "\n";
    cout << "std dev: " << stdDev << "\n";
}