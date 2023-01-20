#pragma once
class Meni
{
private:
	char poruka[150], potpis[50];
	int ocjena;

public:

	void setPoruka();
	char* getPoruka();

	void setPotpis();
	char* getPotpis();

	void setOcjena();
	int getOcjena();

	void adminMeni();
	void uposlenikMeni();
	void kupacMeni();

	void pocetniMeni();
	void krajnjiMeni();

	void feedbackMenu();
	void feedback();
};
