#pragma once
#include "CPerson.h"
#include <iostream>
#include <string>
using namespace std;

class CAmerikaner : public CPerson
{

public:

	CAmerikaner(string name);
	 virtual void Speak();
};

