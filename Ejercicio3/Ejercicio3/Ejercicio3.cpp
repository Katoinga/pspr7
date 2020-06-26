
#include <iostream>
using namespace std;

int main() {
	int* x;
	// forzamos el limite de memoria con este 
	// int grande, para comprobar que funcione.
	int size = 1000000000000000;

	try {
		//aqui se asigna la memoria.
		x = new int[size];
		// si funciono entonces anadir 0s a size
		x[0] = 10;
		cout << "Arreglo iniciado";
		delete[] x;
	}
	catch (bad_alloc& e) {
		// se ejecuta correctamente
		cout << "Exception controlada: "<<e.what()<< endl;
	}

	return 0;
}