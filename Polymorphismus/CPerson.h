#pragma once

#include <string>
using namespace std;

class CPerson
{
protected:
	string Name;

 public:

	 CPerson(string name);
	 virtual void Speak();

};
