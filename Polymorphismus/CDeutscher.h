#pragma once
#include "CPerson.h"
#include <iostream>
#include <string>
using namespace std;

class CDeutscher : public CPerson
{

public:

	CDeutscher(string name);
	virtual void Speak();
};