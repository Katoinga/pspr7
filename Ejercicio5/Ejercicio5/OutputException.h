#pragma once
#include <string>
#include "ComputerException.h"
using namespace std;
class OutputException : public ComputerException
{
public:
	string getMessage();
};