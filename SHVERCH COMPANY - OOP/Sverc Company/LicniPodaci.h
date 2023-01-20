#pragma once
class LicniPodaci
{
private:
	char ime[15], prezime[30];
public:
	LicniPodaci();

	void setIme();
	char* getIme();

	void setPrezime();
	char* getPrezime();

	~LicniPodaci() {};
};

