#include "CAmerikaner.h"

#include <iostream>
#include <string>
using namespace std;

CAmerikaner::CAmerikaner(string name):CPerson(name)
{

}
void CAmerikaner::Speak()
{
	cout << "My Name is " << Name << endl;
}
