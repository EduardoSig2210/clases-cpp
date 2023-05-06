#include<iostream>

using namespace std;

int main() {
	int nino=0, nina=0, edad=0, renta=0, total=0;  //Entradas edad, renta 
	string repetir, enfermedad, genero;

	do{
		cout << "Ingrese la edad: ";
		cin >> edad;
		if (edad<=5){
			cout << "Tiene alguna enfermedad: ";
			cin >> enfermedad;
			if (enfermedad == "no" || enfermedad == "No") {
				cout << "Indique su renta anual: ";
				cin >> renta;
				if (renta<4500){
					cout << "Ingrese el genero:\nf=Femenino\nm=Masculino\n";
					cin >> genero;
					if (genero == "f" || genero == "F") {
						nina += 1;
					}
					else {
						nino += 1;
					}
				}
				else {
					cout << "No aplica"<<endl;
				}
			}
			else {
				cout << "No aplica"<<endl;
			}
		}
		else{
			cout << "No aplica"<<endl;
		}
		total = nino + nina;
		cout << "Desea realizar la encuesta: ";
		cin >> repetir;
	} while (repetir == "si" || repetir == "Si");

	cout << "El total a vacunar es de: " << total << endl;
	cout << "Son " << nino << " chicos y " << nina << " chicas";
}