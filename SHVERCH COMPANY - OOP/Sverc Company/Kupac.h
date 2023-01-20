#pragma once
#include "Datum.h"
#include "Skladiste.h"
#include "LicniPodaci.h"

enum vrstaNacinaNarucivanja { e_mail = 0, broj_telefona, dolazak_u_radnju };

class Kupac : public LicniPodaci
{
private:

	char grad[15], adresaStanovanja[30];
	vrstaNacinaNarucivanja vrsta;
	Datum datum;
	Skladiste uzmiNardzbu;
	char email[50], brojTelefona[15];

public:
	Kupac();

	void setGrad();
	char* getGrad();

	void setAdresaStanovanja();
	char* getAdresaStanovanja();

	void setEmail();
	char* getEmail();

	void setBrojTelefona();
	char* getBrojTelefona();

	void setVrstaNacinaNarucivanja(vrstaNacinaNarucivanja x);
	vrstaNacinaNarucivanja getVrstaNarucivanja();

	void postaviKupca();
	void ispisPodatakaOKupcu();

	~Kupac() {};
};

