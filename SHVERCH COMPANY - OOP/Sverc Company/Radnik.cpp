#include "Radnik.h"
#include <iostream>
#include <string>
#include "Skladiste.h"
#include <memory>

using namespace std;

Radnik::Radnik()
{
	this->godinaStaza = 0;
	this->satnica = 10;
	this->vrsta = terenski_radnik;
}

void Radnik::setGodinaStaza()
{
	cout << "\t\t\tUnesite koliko godina staza osoba ima: ";
	cin >> this->godinaStaza;
	cin.ignore();
}

void Radnik::setSatnica()
{
	cout << "\t\t\tUnesite satnicu radnika: ";
	cin >> this->satnica;
	cin.ignore();
}

void Radnik::setVrsta(Vrsta_radnika x)
{
	this->vrsta = x;
}


int Radnik::getGodinaStaza()
{
	return this->godinaStaza;
}

float Radnik::getSatnica()
{
	return this->satnica;
}

Vrsta_radnika Radnik::getVrsta()
{
	return this->vrsta;
}

void Radnik::unosRadnika()
{

	this->setIme();
	this->setPrezime();
	this->setGodinaStaza();
	this->setSatnica();

	cout << "\t\t\tRadnik je: ";

	if (this->getVrsta() == terenski_radnik) {
		cout << "Terenski radnik.\n";
	}

	else {
		cout << "Kucni radnik.\n";
	}

	cout << "\n\t\t\tDa li zelite promijeniti vrstu posla koji radnik obavlja?\n\t\t\t1.Da\n\t\t\t2.Ne\n\t\t\tOdabir: ";
	int izborPromjeneVrste;
	cin >> izborPromjeneVrste;
	cin.ignore();

	switch (izborPromjeneVrste)
	{
	case 1:
		this->promjenaVrste();
		cout << "\t\t\tVrsta posla je promijenjena!\n";
		break;
	case 2:
		cout << "\t\t\tVrsta posla ostaje ista!\n";
		break;
	default:
		cout << "\t\t\tPogresan unos!";
		break;
	}

}

void Radnik::ispisRadnika()
{
	cout << "\t\t\tIme i prezime radnika: " << this->getIme() << " " << this->getPrezime() << "\n";
	cout << "\t\t\tRadnik ima " << this->getGodinaStaza() << " godina staza i koeficijent plate " << this->getSatnica() << "\n";
	cout << "\t\t\tRadnik je: ";

	if (this->getVrsta() == terenski_radnik) {
		cout << "Terenski radnik.\n";
	}

	else {
		cout << "Kucni radnik.\n";
	}

}

void Radnik::promjenaVrste()
{
	if (this->getVrsta() == terenski_radnik) {
		this->setVrsta(kucni_radnik);
	}

	else {
		this->setVrsta(terenski_radnik);
	}
}
