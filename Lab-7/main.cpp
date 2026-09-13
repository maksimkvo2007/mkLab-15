#include <iostream> 
#include <string>
using namespace std;

void displayArray(const string* arr, int size){
    for (int i=0; i < size; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;
}
string* reverseArray(const string* arr, int size){
    for (int i = 0; i < size / 2; i++){
        swap(*(arr + i), *(arr + (size - 1 - i)));
    }
    return arr;
}



int main(){
    const int size = 5;

    string* names = new string[size];

    *(names + 0) = "Janet"; //just used the same names as you
    *(names + 1) = "Jeffe";
    *(names + 2) = "Jin";
    *(names + 3) = "Joe";
    *(names + 4) = "Junio";

    cout << "Original array: ";
    displayArray(naems, size);

    names = reverseArray(names, size);
    cout << "Reversed array: ";
    displayArray(names, size);

    delete[] names; 
    names = nullptr;

}