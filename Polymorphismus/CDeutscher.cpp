#include "CDeutscher.h"
#include <iostream>
#include <string>
using namespace std;

CDeutscher::CDeutscher(string name) :CPerson(name)
{

}
void CDeutscher::Speak()
{

		cout << "Mein Name ist " << Name << endl;
}