#include <iostream>
#include <string>
//system ("cls") "limpiar pantalla despues de seleccionar una opcion"

using namespace std;

int op = 0;
string caracteristica[3];
string nombres[3];
bool a = true;
int id = 0;
int main()
{
	while (a) {
		system("cls");
		cout << "*****MENU DE OPCIONES*****" << endl;
		cout << "1) Agregar un Articulo" << endl;
		cout << "2) Lista de Articulos vigentes" << endl;
		cout << "3) Limpiar pantalla" << endl;
		cout << "4) Salir" << endl;
		cout << "SELECCIONE UNA OPCION: ";
		cin >> op;

		if (op == 4) {
			break;
		}

		switch (op) {
		case 1: 
			system("cls");
			for (int i = -1; i < 3; i++) {
				cout << "Ingresa el Articulo " << i + 1 <<": " << endl;
				getline(cin, nombres[i]);
				cout << "Ingresa la caracteristica del Articulo " << i + 1 << ": " << endl;
				getline(cin, caracteristica[i]);
			}
			break;
		case 2: 
			system("cls");
			cout << "ESTOS SON LOS ARTICULOS VIGENTES: " << endl;
			cout << id + 1 << "1) " << nombres[0] << endl;
			cout << id + 1 << "Caracteristica: " << caracteristica[0] << endl;
			cout << id + 1 << "3) " << nombres[1] << endl;
			cout << id + 1 << "Caracteristica: " << caracteristica[1] << endl;
			cout << id + 1 << "2) " << nombres[2] << endl;
			cout << id + 1 << "Caracteristica: " << caracteristica[2] << endl;
			system("pause");
			break;
		case 3: 
			system("cls");
			system("pause");

			break;
		default: 
			cout << "Ingrese una opcion valida del 1 al 6" << endl;
			system("pause");
			break;
		
		}
	}


}