#include <iostream>
#include<cmath>

using namespace std;

float division(float x, float y);

float multiplicacion(float x, float y);

int suma(float x, float y);

int resta(float x, float y);

float elevacion(float x, float y);

float raiz(float x, float y);

float calculadora(float a, float b);

int main() {
	string resp, user, password;
	float val1, val2;
	int i = 0;
	cout << "Ingrese el usuario: ";
	cin >> user;
	cout << "Ingrese la contrasena: ";
	cin >> password;
	while(i < 3) {
		if (user == "EAS2210" && password == "22102003") {
			i=3;
			do {
				cout << "ingrese valor 1: ";
				cin >> val1;
				cout << "ingrese valor 2: ";
				cin >> val2;
				calculadora(val1, val2);
			} while (resp == "si" || resp == "Si");
		}
		else {
			cout << "Usuario o contrasena incorrecta";
			i++;
		}
	}
}

float division(float x, float y) {
	float total
		= 0;
	total = x / y;
	return total;
}

float multiplicacion(float x, float y) {
	float total = 0;
	total = x * y;
	return total;
}

int suma(float x, float y) {
	float total = 0;
	total = x + y;
	return total;
}

int resta(float x, float y) {
	float total = 0;
	total = x - y;
	return total;
}

float elevacion(float x, float y) {
	float total = 0;
	total = pow(x, y);
	return total;
}

float raiz(float x, float y) {
	float total, total2;
	total = sqrt(x);
	total2 = sqrt(y);
	cout << "La raiz cuadrada de " << x << " es: " << total<< endl;
	cout << "La raiz cuadrada de " << y << " es: " << total2 << endl;
	return total, total2;
}

float calculadora(float a, float b) {
	int opcion = 0;
	
	cout << "1. Suma" << endl;
	cout << "2. Resta" << endl;
	cout << "3. Multiplicacion" << endl;
	cout << "4. Division" << endl;
	cout << "5. Elevacion exponencial" << endl;
	cout << "6. Raices cuadradas" << endl;
	cout << "Seleccione una opcion: ";
	cin >> opcion;
	switch (opcion) {
	case 1:
		cout << "La suma es: " << suma(a, b) << endl;
		break;
	case 2:
		cout << "La resta es: " << resta(a, b) << endl;
		break;
	case 3:
		cout << "La multiplicacion es: " << multiplicacion(a, b) << endl;
		break;
		case 4:
		cout << "La division es: " << division(a, b) << endl;
		break;
	case 5:
		cout << "La elevacion es: " << elevacion(a, b) << endl;
		break;
	case 6:
		raiz(a, b);
		break;
	default:
		cout << "opcion invalida";
		break;
	}
	return opcion;
}