#include <iostream>

using namespace std;

int main() {
    int arreglo[4] = {1,3,5,4};

    cout << arreglo[3];
    cout << arreglo[2];
    arreglo[2] = 8;
    cout << arreglo[2]<<endl;

    for (int i = 3; i >= 0; i--)
    {
        cout << arreglo[i];
    }
}