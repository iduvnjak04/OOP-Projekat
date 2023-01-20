#pragma once
#include "LicniPodaci.h"

//Klasa sluzi za obracun plata na mjesecnom nivou svih zaposlenih
//Ovoj klasi pristup ima administracija firme

enum Vrsta_radnika { terenski_radnik = 0, kucni_radnik };

class Radnik : public LicniPodaci
{
private:
	int godinaStaza;
	float satnica;
	Vrsta_radnika vrsta;
public:
	Radnik();

	void setGodinaStaza();
	void setSatnica();
	void setVrsta(Vrsta_radnika x);

	int getGodinaStaza();
	float getSatnica();
	Vrsta_radnika getVrsta();

	void unosRadnika();
	void ispisRadnika();

	void promjenaVrste();

	~Radnik() {};

};