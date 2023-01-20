#include "Kupac.h"
#include <iostream>

using namespace std;

Kupac::Kupac()
{
	strcpy_s(this->adresaStanovanja, "Ulica");
	strcpy_s(this->email, "Email");
	strcpy_s(this->brojTelefona, "BrojTelefona");
}

void Kupac::setGrad()
{
	cout << "\t\t\tMolimo unesite grad u kojem boravite: ";
	cin.getline(this->grad, 15);
}

char* Kupac::getGrad()
{
	return this->grad;
}

void Kupac::setAdresaStanovanja()
{
	cout << "\t\t\tMolimo unesite adresu stanovanja: ";
	cin.getline(this->adresaStanovanja, 30);
}

char* Kupac::getAdresaStanovanja()
{
	return this->adresaStanovanja;
}

void Kupac::setEmail()
{
	cout << "\t\t\tMolimo unesite email adresu: ";
	cin.getline(this->email, 50);
}

char* Kupac::getEmail()
{
	return this->email;
}

void Kupac::setBrojTelefona()
{
	cout << "\t\t\tMolimo unesite broj telefona: ";
	cin.getline(this->brojTelefona, 15);
}

char* Kupac::getBrojTelefona()
{
	return this->brojTelefona;
}

void Kupac::setVrstaNacinaNarucivanja(vrstaNacinaNarucivanja x)
{
	this->vrsta = x;
}

vrstaNacinaNarucivanja Kupac::getVrstaNarucivanja()
{
	return this->vrsta;
}

void Kupac::postaviKupca()
{
	this->setIme();
	this->setPrezime();
	this->setGrad();
	this->setAdresaStanovanja();

	cout << "\t\t\tNacin na koji je narudzba izvrsena: ";
	if (this->getVrstaNarucivanja() == e_mail) {
		cout << "Email narudzba.\n";
		this->setEmail();
	}
	else if (this->getVrstaNarucivanja() == broj_telefona) {
		cout << "Poruceno pozivom na broj.\n";
		this->setBrojTelefona();
	}
	else {
		cout << "Dolazak u radnju.\n";
	}
	cout << "\t\t\tNarudzba: \n";
	uzmiNardzbu.uzmiIzSkladista();
	this->datum.postaviDatum();
}

void Kupac::ispisPodatakaOKupcu()
{
	cout << "\n\n\t\t\tIme i prezime: " << this->getIme() << " " << this->getPrezime() << "\n";
	cout << "\t\t\tGrad: " << this->getGrad() << "\n";
	cout << "\t\t\tAdresa stanovanja: " << this->getAdresaStanovanja() << "\n";
	cout << "\t\t\tNacin na koji je izvrsena narudzba: ";

	if (this->getVrstaNarucivanja() == e_mail) {
		cout << "Email narudzba.\n";
		cout << "\t\t\tEmail kupca: " << this->getEmail();
	}
	else if (this->getVrstaNarucivanja() == broj_telefona) {
		cout << "Poruceno pozivom na broj.\n";
		cout << "\t\t\tBroj telefona kupca: " << this->getBrojTelefona();
	}
	else {
		cout << "Kupac je dosao licno u radnju, te izvrsio narudzbu.\n";
	}

	cout << "\t\t\tDatum kada je izvrsena narudzba: ";
	this->datum.ispisDatum();
}
