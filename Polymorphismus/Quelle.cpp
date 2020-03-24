#include <iostream>
#include <string>
#include "CPerson.h"
#include "CAmerikaner.h"
#include "CDeutscher.h"
using namespace std;

int main(int argc, char* argv[])
{

	CAmerikaner praesident("Barak Obama");
	CDeutscher bundeskanzler("Angela Merkel");

	praesident.Speak();
	bundeskanzler.Speak();

	// Einladung zum Wirtschaftsgipfel
	CPerson* Teilnehmerliste[2];

	Teilnehmerliste[0] = &bundeskanzler;
	Teilnehmerliste[1] = &praesident;

	cout << endl;
	cout << "Liebe Teilnehmer, stellen Sie sich bitte vor" << endl;
	Teilnehmerliste[0]->Speak();
	Teilnehmerliste[1]->Speak();
	cout << "Danke" << endl;
	cout << endl;

	return EXIT_SUCCESS;
}