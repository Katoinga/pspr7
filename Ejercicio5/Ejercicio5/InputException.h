#pragma once
#include <string>
#include "ComputerException.h"
using namespace std;
class InputException :public ComputerException {
public:
	string getMessage();
};