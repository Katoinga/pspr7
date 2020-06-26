
#include <iostream>
using namespace std;
double division(double n1, double n2);
class exc_cero :public exception {
public:const char* what() const throw() {
		return "Error: division por cero..";
	}
};
int main()
{
	cout << "Ingrese dos numeros\n";
	//numerador
	//divisor no puede ser 0
	double numr, div;
	cout << "\nIngrese numerador: ";
	cin >> numr;
	cout << "\nIngrese divisor: ";
	cin >> div;
	try
	{
		if (div == 0) throw exc_cero();
		cout << "El resultado de la division es: "<<division(numr,div);
	}
	catch (const exception& e)
	{
		cout <<"Exception!: "<< e.what() << endl;
	}


}

double division(double n1,double n2)
{
	return n1/n2;
}
