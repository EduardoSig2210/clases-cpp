#include <iostream>

using namespace std;

//funcion retiro
int retiro(int montoCuenta, int cantidadRetirar) {
	int ahorroTotal = montoCuenta;

		if (cantidadRetirar <= montoCuenta && cantidadRetirar % 5 == 0) {
			ahorroTotal -= cantidadRetirar;
			cout << "Su retiro se ha realizado correctamente, su ahorro total es de: " << ahorroTotal << endl;

		}
		else {
			cout << "La cantidad sobrepasa la cantidad de la cuenta de ahorro o no se puede realizar el retiro";
		}
	return ahorroTotal;
}

//funcion ingreso
int ingreso(int montoCuenta, int cantidadRetirar) {
	int ahorroTotal = montoCuenta;

	if (cantidadRetirar % 5 == 0) {
		ahorroTotal += cantidadRetirar;
		cout << "Su ingreso se ha realizado correctamente, su ahorro total es de: " << ahorroTotal << endl;

	}
	else {
		cout << "La cantidad sobrepasa la cantidad de la cuenta de ahorro o no se puede realizar el ingreso";
	}
	return ahorroTotal;
}

//int pin
void pin(int y) {
	int cant = 0, monto = 0, opcion = 0;
	string opcion2;
	switch (y) {
	case 1234:
		monto = 4000;
		do {
			cout << "1 Retiro\n";
			cout << "2 ingresar ahorro\n";
			cout << "3 salir\n";
			cout << "¿Que desea realizar? ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Ingrese la cantidad: ";
				cin >> cant;
				retiro(monto, cant);
				break;
			case 2:
				cout << "Ingrese la cantidad: ";
				cin >> cant;
				ingreso(monto, cant);
				break;
			case 3:
				cout << "Que tenga un buen dia";
				break;
			}
			cout << "Desea realizar otra transaccion?";
			cin >> opcion2;
		} while (opcion2 == "si" || opcion2 == "Si");
		break;
	case 2210:
		monto = 4000;
		do {
			cout << "1 Retiro\n";
			cout << "2 ingresar ahorro\n";
			cout << "3 salir\n";
			cout << "¿Que desea realizar? ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Ingrese la cantidad: ";
				cin >> cant;
				retiro(monto, cant);
				break;
			case 2:
				cout << "Ingrese la cantidad: ";
				cin >> cant;
				ingreso(monto, cant);
				break;
			case 3:
				cout << "Que tenga un buen dia";
				break;
			}
			cout << "Desea realizar otra transaccion?";
			cin >> opcion2;
		} while (opcion2 == "si" || opcion2 == "Si");
		break;
	case 1001:
		monto = 4000;
		do {
			cout << "1 Retiro\n";
			cout << "2 ingresar ahorro\n";
			cout << "3 salir\n";
			cout << "¿Que desea realizar? ";
			cin >> opcion;
			switch (opcion) {
			case 1:
				cout << "Ingrese la cantidad: ";
				cin >> cant;
				retiro(monto, cant);
				break;
			case 2:
				cout << "Ingrese la cantidad: ";
				cin >> cant;
				ingreso(monto, cant);
				break;
			case 3:
				cout << "Que tenga un buen dia";
				break;
			}
			cout << "Desea realizar otra transaccion?";
			cin >> opcion2;
		} while (opcion2 == "si" || opcion2 == "Si");
		break;
	default:
		cout << "Pin no valido";
	}
}

int main() {
	int cont = 0;

	cout << "Ingrese el pin: ";
	cin >> cont;
	pin(cont);
}