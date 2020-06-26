

#include <iostream>
using namespace std;
void raicesResultado(float a, float b, float c, float x1, float x2);
float raiz_real(float a, float b, float c);
void raices(float a, float b, float c);
class raices_reales : public exception
{
public:
	const char* what() const throw()
	{
		return "Error: No es una raiz real";
	}
};
class coeficiente_cero : public exception
{
public:
	const char* what() const throw()
	{
		return "Error: Primer Coeficiente cero";
	}
};


int main()
{
	float a, b, c;
	cout << "Ecuacion cuadratica: f(x) = ax^2 + bx + c" << endl;

	cout << "Ingrese coeficiente a: " << endl;
	cin >> a;

	cout << "Ingrese coeficiente b: " << endl;
	cin >> b;
	
	cout << "Ingrese coeficiente c: " << endl;
	cin >> c;
	raices(a,b,c);
	
}

void raicesResultado(float a, float b, float c,float x1,float x2) {
	
	x1 = (-b + sqrt(b * b - 4.0 * a * c)) / (2.0 * a);
	x2 = (-b - sqrt(b*b - 4.0 * a * c)) / (2.0 * a);
	//obteniendo x1 y x2
	cout << "x1: " << x1 << endl;
	cout << "x2: " << x2 << endl;
}
void raices(float a, float b, float c) {
	try
	{
		//excepcion primer coeficiente 0
		if (a == 0) throw coeficiente_cero();
		if (((b * b) - (4.0 * a * c)) >= 0.0)
		{
			float x1 = 0;
			float x2 = 0;

			cout << " las raices de la f(x) son reales: " << endl;
			raicesResultado(a, b, c, x1, x2);

		}
		//excepcion no hay raices reales
		else throw raices_reales(); {

		}
	}
	catch (const exception & e)
	{
		cout << "Exepcion controlada: " << e.what() << endl;
	}
}
