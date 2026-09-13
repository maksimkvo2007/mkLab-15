#include <iostream>
using namespace std;

void enterArrayData(double* a, int n){
    cout << "Data for the array:\n";
    for (int i = 0; i < n; i++){
        cout << "Element #" << i << ": ";
        cin >> *(a + i);
    }
}
void outputArrayData(const double* a, int n){
    cout << "Output:\n";
    for(int i = 0; i < n; i++){
        
    }
}
double sumArray(const double* a, int n);

int main(){
    
}
