#pragma once
enum VrstaRobe { tekstil = 0, stvari_za_kucu };

class Roba
{
private:
	char nazivRobe[20];
	int brojRobeNaStanju;
	float cijenaRobe;

	VrstaRobe vrsta_robe;

public:

	//Popis inventara/opreme
	//Funkcionalnosti dostupne samo zaposlenim

	Roba() {};

	void setVrstaRobe(VrstaRobe x);
	VrstaRobe getVrstaRobe();

	void setNazivRobe();
	char* getNazivRobe();

	void setCijenaRobe();
	float getCijenaRobe();

	void setBrojRobeNaStanju();
	int getBrojRobeNaStanju();

	void unesiRobu();

	void povecajBrojRobeNaStanju(int x);
	void smanjiBrojRobeNaStanju(int x);

	~Roba() {};

};

