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
        cout << *(a + i) << endl;
    }
}
double sumArray(const double* a, int n){
    double sum = 0.0;
    for (int i = 0; i < n; i++){
        sum += *(a + i);
    }
    return sum;
}

int main(){
    const int N = 5;
    double* a = new double[N];

    enterArrayData(a, N);
    outputArrayData(a, N);
    double sum = sumArray(a, N);
    cout << "Sum: " << sum << endl;

    delete[] a;
    a = nullptr;
}
