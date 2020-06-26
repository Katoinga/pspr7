#pragma once

#include <string>
using namespace std;
class ComputerException {
public:
	string message = "Error";//Mensaje que contiene el error
	string getMessage();
};