#include <iostream>
#include<cmath>

using namespace std;

float division(int x, int y);

float multiplicacion(int x, int y);

int suma(int x, int y);

int resta(int x, int y);

float elevacion(int x, int y);

float raiz(int x, int y);

int main() {
	int opcion = 0, val1, val2;
	cout << "ingrese valor 1: ";
	cin >> val1;
	cout << "ingrese valor 2: ";
	cin >> val2;
	cout << "Seleccione una opcion: ";
	cin >> opcion;
	switch (opcion){
	case 1:
		suma(val1, val2);
		break;
	case 2:
		resta(val1, val2);
		break;
	case 3:
		multiplicacion(val1, val2);
		break;
	case 4:
		division(val1, val2);
		break;
	case 5:
		elevacion(val1, val2);
		break;
	case 6:
		raiz(val1, val2);
		break;
	default:
		cout << "opcion invalida";
		break;
	}

}

float division(int x, int y) {
	float total = 0;
	total = x / y;
	return total;
}

float multiplicacion(int x, int y) {

}

int suma(int x, int y) {

}

int resta(int x, int y) {

}

float elevacion(int x, int y) {
	float total = 0;
	total = pow(x, y);
	return total;
}

float raiz(int x, int y) {
	float sqrt(x);
	return sqrt;
}