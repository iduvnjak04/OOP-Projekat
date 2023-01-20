#pragma once
#include "Roba.h"
#include <vector>

using namespace std;

class Skladiste
{
private:

	int kapacitetStvariUSkladistu;
	static int ukupanBrojRobeNaStanju;
	vector<Roba> roba;

public:
	Skladiste();

	void setSpremiRobuUSkladiste();
	vector<Roba>& getSpremljenoIzSkladista();

	void uzmiIzSkladista();
	void prikazSkladista();
	void pretragaPoNazivu();

	void teka_racun();
	void prikaziTekaRacun();

	int getUkupanBrojRobeNaStanju();
	static void naStanjuJeTrenutnoXRobe();

	~Skladiste() {};
};


