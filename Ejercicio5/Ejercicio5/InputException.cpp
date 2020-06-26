#include <string>
#include "InputException.h"
using namespace std;

string InputException::getMessage() {
	return "Este error es de tipo InputException probablemente debido a que no se pudo abrir el nombre del fichero porque no existe o introdujo mal";
}