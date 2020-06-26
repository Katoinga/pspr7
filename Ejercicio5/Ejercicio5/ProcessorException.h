#pragma once
#include <string>
#include "ComputerException.h"
using namespace std;

class ProcessorException : public ComputerException
{
public:
	string getMessage();
};