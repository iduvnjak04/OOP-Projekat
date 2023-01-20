#include "Roba.h"
#include <fstream>
#include <iostream>

using namespace std;

void Roba::setNazivRobe()
{
	cout << "\t\t\tMolimo Vas unesite naziv robe: ";
	cin.getline(this->nazivRobe, 20);
}

char* Roba::getNazivRobe()
{
	return this->nazivRobe;
}

void Roba::setCijenaRobe()
{
	cout << "\t\t\tMolimo unesite cijenu robe: ";
	cin >> this->cijenaRobe;
	cin.ignore();
}

float Roba::getCijenaRobe()
{
	return this->cijenaRobe;
}

void Roba::setBrojRobeNaStanju()
{
	cout << "\t\t\tUnesi broj robe koju zelite unijeti: ";
	cin >> this->brojRobeNaStanju;
	cin.ignore();

}

int Roba::getBrojRobeNaStanju()
{
	return this->brojRobeNaStanju;
}

void Roba::setVrstaRobe(VrstaRobe x)
{
	this->vrsta_robe = x;
}

VrstaRobe Roba::getVrstaRobe()
{
	return this->vrsta_robe;
}

void Roba::unesiRobu()
{
	system("cls");
	cin.ignore();

	this->setNazivRobe();

	cout << "\t\t\tDa li je roba tekstilna ili su stvari za kucu?\n";
	cout << "\t\t\t1. Tekstilna roba\n";
	cout << "\t\t\t2. Stvari za kucu\n";

	int izborVrsteRobe;
	cout << "\t\t\tVas izbor je: ";
	cin >> izborVrsteRobe;
	cin.ignore();

	if (izborVrsteRobe == 1) {
		this->setVrstaRobe(tekstil);
		cout << "\n\t\t\tUnosite podatke o tekstilnoj robi!\n";
	}

	else {
		this->setVrstaRobe(stvari_za_kucu);
		cout << "\n\t\t\tUnosite podatke o stvarima za kucu!\n";
	}

	this->setCijenaRobe();
	this->setBrojRobeNaStanju();
}


void Roba::povecajBrojRobeNaStanju(int x)
{
	this->brojRobeNaStanju += x;
}

void Roba::smanjiBrojRobeNaStanju(int x)
{
	this->brojRobeNaStanju -= x;
}