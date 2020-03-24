#include "CPerson.h"

#include <iostream>
#include <string>
using namespace std;

CPerson::CPerson(string name)
{
	Name = name;
}

void CPerson::Speak()
{
	cout << Name << endl;
}