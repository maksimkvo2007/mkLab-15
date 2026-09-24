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

    void print() {
        cout << "Movie: " << writer << "\n";
        cout << "    Year released: " << year << "\n";
        cout << "    Screenwriter: " << title << "\n\n";
    }
};

int main(){
    vector<Movie> list;
    ifstream file("Lab-15/input.txt");

    string t, w; 
    int y;

    while (getline(file, t)) {
        file >> y;
        file.ignore(); 
        getline(file, w);

        Movie m;
        m.setTitle(t);
        m.setYear(y);
        m.setWriter(w);
        
        list.push_back(m);
    }
    file.close();

    for (int i = 0; i < list.size(); i++) {
        list[i].print();
    }
}