#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Movie {
private:
    string writer;
    int year;
    string title;

    public:
    void setWriter(string w) { writer = w; }
    void setYear(int y) { year = y; }
    void setTitle(string t) { title = t; }

    string getWriter() { return writer; }
    int getYear() { return year; }
    string getTitle() { return title; }
}

int main(){
    vector<Movie> list;
    ifstream file("input.txt");
}