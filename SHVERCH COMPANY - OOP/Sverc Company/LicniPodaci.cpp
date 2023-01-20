#include "LicniPodaci.h"
#include <iostream>

using namespace std;

LicniPodaci::LicniPodaci()
{
	strcpy_s(this->ime, "Ime");
	strcpy_s(this->prezime, "Prezime");
}

void LicniPodaci::setIme()
{
	cout << "\n\t\t\tMolimo unesite ime: ";
	cin.getline(this->ime, 20);
}

char* LicniPodaci::getIme()
{
	return this->ime;
}

void LicniPodaci::setPrezime()
{
	cout << "\t\t\tMolimo unesite prezime: ";
	cin.getline(this->prezime, 30);
}

char* LicniPodaci::getPrezime()
{
	return this->prezime;
}
