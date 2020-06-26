
#include <iostream>
#include <string>
using namespace std;

int main() {
	int x;
	int a = 1;
	cin.exceptions(ios_base::failbit);

	try
	{
		// solo acepta int
		cout << "Pon un valor numerico entero: ";
		cin >> a;
	}
	catch (std::ios_base::failure & error)
	{
		std::cout << "Introdujo el tipo de dato incorrecto!";
		return 0;
	}
	// imprime el valor insertado
	cout << "El valor a es: " << a << '\n';
	return 0;
}