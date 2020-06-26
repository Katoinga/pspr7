
#include <iostream>
using namespace std;
#include <string>
#include "ComputerException.h"
#include "InputException.h"
#include "ProcessorException.h"
#include "OutputException.h"
#include <fstream>



int main()
{
	char linea[100], nombre[40];
	int i = 0;
	char frase[128];
	char cadena[128];
	
	// para probar la primera excepcion
	try {
		cout << "Nombre del fichero:\n";
		cin >> nombre;
		ifstream fe(nombre);
		if (!fe) throw InputException();
		cout << "Leyendo";
		while (!fe.eof()) {
			fe.getline(cadena, 128);
			cout << cadena << endl;

		}
		fe.close();
		
		
		cout << "Proceso correcto\n";
		
	}
	catch (InputException & excep) {
		cout << "Exepcion encontrada!!!\n";
		cout << excep.getMessage() << endl;
		return 0;
	}

	try
	{
		ofstream fs("fichero.txt");
		// probar output exception
		if (!fs) throw OutputException();
		do {
			//solo haciendo throw por ejemplo
			//throw ProcessorException();
			cout << "Ingrese una frase\nSi no desea solo presione intro sin teclear nada\n";
			cin.getline(frase, 128);
			cin.getline(frase, 128);
			fs << frase << "\n";
			
		} while (frase[0] != '\0' && frase[0] != ' '
			&& frase[0] != '\t');


		fs.close();
	}
	catch (OutputException & e)
	{
		cout << "Exepcion encontrada!!!\n";
		cout << e.getMessage() << endl;
		return 0;

	}
	catch (ProcessorException& e)
	{
		cout << "Exepcion encontrada!!!\n";
		cout << e.getMessage() << endl;
		return 0;

	}
	return 0;
}




