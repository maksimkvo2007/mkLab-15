#include <iostream> 
#include <iomanip>
using namespace std;

class Color {
private: //had to search up about this as i've never used it
    int red;
    int green;
    int blue;

public:
    Color(){
        red = 0;
        blue = 0;
        green = 0;
    }

    void setRed(int r) {
        red = r;
    }
    
    void setGreen(int g) {
        green = g;
    }
    
    void setBlue(int b) {
        blue = b;
    }

    // Getter member functions
    int getRed() {
        return red;
    }
    
    int getGreen() {
        return green;
    }
    
    int getBlue() {
        return blue;
    }
}

int main(){
    Color color1;
    Color color2;
    Color color3;

    //adding value to each color
    color1.setRed(255);
    color1.setGreen(0);
    color1.setBlue(0);

    color2.setRed(0);
    color2.setGreen(255);
    color2.setBlue(0);

    color3.setRed(0);
    color3.setGreen(0);
    color3.setBlue(255);

    //Output
    cout << "Color 1 (Red):    ";
    color1.print();

    cout << "Color 2 (Green):  ";
    color2.print();

    cout << "Color 3 (Blue): ";
    color3.print();

}