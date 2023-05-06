#include <iostream>

//
//
// Siguenza Argueta, Eduardo Andres

using namespace std;

int main() {
	int nina = 0, nin = 0, total = 0, renta, edad, nin2=0, nina2=0, total2=0;
	string genero, enfermedad, repetidor;

	cout << "Desea hacer la encuesta: ";
	cin >> repetidor;
	while (repetidor == "si" || repetidor == "Si") {
		nin = 0;
		nina = 0;
		cout << "Identifique el sexo del joven: ";
		cin >> genero;
		if (genero == "F" || genero == "f") {
			nina = 1;
		}
		if (genero == "M" || genero == "m") {
			nin = 1;
		}

		

		cout << "que edad tiene el joven: ";
		cin >> edad;
		if (edad > 5 && (genero == "M" || genero == "m")) {
			nin -= 1;
		}
		if (edad > 5 && (genero == "f" || genero == "F")) {
			nina -= 1;
		}

		cout << "Tiene alguna enfermedad: ";
		cin >> enfermedad;
		if ((enfermedad == "si" || enfermedad == "Si") && (genero == "M" || genero == "m")) {
			nin -= 1;
			if (nin < 0) {
				nin = 0;
			}
		}
		if ((enfermedad == "si" || enfermedad == "Si") && (genero == "F" || genero == "f")) {
			nin -= 1;
			if (nina < 0) {
				nina = 0;
			}
		}

		nin2 += nin;
		nina2 += nina;

		cout << "Defina su renta anual: ";
		cin >> renta;
		if (renta < 4500) {
			total = nin + nina;
		}
		total2 += total;
		cout << "Gracias por su participacion \n";
		cout << endl;
		cout << "Desea hacer la encuesta: ";
		cin >> repetidor;
	}
	cout << "la cantidad de niños es: " << total2 << endl;
	cout << "niños" << nin2<<endl;
	cout << "niñas" << nina2<<endl;
}