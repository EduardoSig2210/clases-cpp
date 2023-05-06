#include<iostream>

using namespace std;

int main() {
	int i = 1, num, total=0;
	while (i <= 5) {
		cout << "Ingrese el valor " << i << ": ";
		cin >> num;
		total += num;
		i++;
	}
	cout << "La suma es de: " << total;
}