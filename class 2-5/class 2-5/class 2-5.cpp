#include <iostream>

using namespace std;

int main(){
	int opcion = 0, total = 0, rep;
	string respuesta;
	do{
		rep = 1;
		cout << "1. Suma de los multiplos de cinco\n";
		cout << "2. Suma de numeros pares del 1 al 20\n";
		cout << "3. Suma de numeros impares del 1 al 50\n";
		cout<< "Ingrese la opcion: \n";
		cin >> opcion;
		switch (opcion){
		case 1:
			for (int i = 0; i <= 100; i++){
				if (i%5==0){
					cout << i << " es multiplo de 5\n";
					total += i;
				}
			}
			cout << "el total de la suma es: " << total << endl;
			break;
		case 2:
			for (int i = 0; i <= 20; i++) {
				if (i % 2 == 0) {
					cout << i << " es par\n";
					total += i;
				}
			}
			cout << "el total de la suma es: " << total << endl;
			break;
		case 3:
			for (int i = 0; i <= 50; i++) {
				if (i % 2 != 0) {
					cout << i << " es impar\n";
					total += i;
				}
			}
			cout << "el total de la suma es: " << total << endl;
			break;
		default:
			cout << "opcion no valida\n";
			break;
		}
		cout << "Deesa continuar?";
		cin >> respuesta;
		if (respuesta =="si" || respuesta == "Si"){
			rep++;
		}
		else{
			rep = 5;
		}
	} while (rep<=3);
	
}
