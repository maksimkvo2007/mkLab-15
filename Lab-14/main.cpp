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

    // Getter member functions[cite: 1]
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

    color1.setRed(255);
    color1.setGreen(0);
    color1.setBlue(0);

    
}