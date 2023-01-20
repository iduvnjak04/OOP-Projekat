#include "Skladiste.h"
#include <iostream>
#include <iomanip>
#include <memory>
#include "Roba.h"
#include <fstream>

using namespace std;

int Skladiste::ukupanBrojRobeNaStanju = 0;

Skladiste::Skladiste()
{
	this->kapacitetStvariUSkladistu = 0;
}

void Skladiste::setSpremiRobuUSkladiste()
{
	std::shared_ptr<Roba> temp = std::make_shared<Roba>();
	temp->unesiRobu();
	this->roba.push_back(*temp);

	Skladiste::ukupanBrojRobeNaStanju += temp->getBrojRobeNaStanju();

}

vector<Roba>& Skladiste::getSpremljenoIzSkladista()
{
	return this->roba;
}

void Skladiste::uzmiIzSkladista()
{
	char narudzba[60];
	std::ofstream fiskalniRacun("fiskalni_racun.txt", std::ios::app);
	if (fiskalniRacun.is_open()) {
		cout << "\t\t\tMolimo unesite naziv robe: ";
		cin.getline(narudzba, 60);
		int brojac = 0;

		for (int i = 0; i < this->roba.size(); i++) {
			if (_strcmpi(this->roba[i].getNazivRobe(), narudzba) == 0) {
				brojac++;
				cout << "\t\t\tKoliko primjeraka ove robe zelite naruciti?\n\t\t\tUnesite kolicinu: ";
				int kolicinaZaNaruciti;
				cin >> kolicinaZaNaruciti;
				cin.ignore();

				if (this->roba[i].getBrojRobeNaStanju() < kolicinaZaNaruciti) {
					cout << "\n\t\tNa stanju nemamo toliki broj primjeraka!";
					cout << "\n\t\tOvih primjeraka na stanju imamo: " << this->roba[i].getBrojRobeNaStanju() << " komada.\n";
					cout << "\n\t\tUnesite ponovo broj primjeraka koje zelite narucite shodno broju robe na stanju: ";
					cin >> kolicinaZaNaruciti;
					cin.ignore();

					this->roba[i].smanjiBrojRobeNaStanju(kolicinaZaNaruciti);
					Skladiste::ukupanBrojRobeNaStanju -= kolicinaZaNaruciti;

					cout << "\n\n\t\tNarudzba uspjesno izvrsena!\n";

				}
				else {
					this->roba[i].smanjiBrojRobeNaStanju(kolicinaZaNaruciti);
					Skladiste::ukupanBrojRobeNaStanju -= kolicinaZaNaruciti;
					cout << "\n\n\t\t\tNarudzba uspjesno izvrsena!\n";
				}
			}
			cin.ignore();
			fiskalniRacun << this->roba[i].getNazivRobe() << this->roba[i].getVrstaRobe() << this->roba[i].getCijenaRobe();
			fiskalniRacun.close();
		}
	}
}

void Skladiste::prikazSkladista()
{
	if (this->getSpremljenoIzSkladista().size() == 0) {
		cout << "\n\n\t\t\tSkladiste je trenutno prazno!\n";
	}
	else {
		cout.width(5);
		cout << std::right << "\tR. br.";
		cout.width(18);
		cout << std::right << "\tNaziv opreme";
		cout.width(14);
		cout << std::right << "Na stanju";
		cout.width(14);
		cout << std::right << "Cijena";
		cout.width(14);
		cout << "\n\t-----------------------------------------------------------------------------\n";

		for (int i = 0; i < this->getSpremljenoIzSkladista().size(); i++) {
			cout.width(5);
			cout << right << "\t" << i + 1;

			cout.width(10);
			cout << right << "\t" << this->roba[i].getNazivRobe();

			cout.width(17);
			cout << right << this->roba[i].getBrojRobeNaStanju();;

			cout.width(15);
			cout << right << this->roba[i].getCijenaRobe();

			cout << "\n";
		}
	}
}

void Skladiste::pretragaPoNazivu()
{
	char nazivZaPretragu[30];
	cout << "\n\t\t\tUnesite naziv robe za pretragu: ";
	cin.getline(nazivZaPretragu, 30);
	if (this->getSpremljenoIzSkladista().size() == 0) {
		cout << "\t\t\tSkladiste je trenutno prazno!\n";
	}
	else {
		Skladiste* temp = new Skladiste();
		for (int i = 0; i < this->getSpremljenoIzSkladista().size(); i++) {
			if (_strcmpi(this->roba[i].getNazivRobe(), nazivZaPretragu) == 0) {
				temp->roba.push_back(this->roba[i]);
			}
		}
		if (temp->getSpremljenoIzSkladista().size() == 0) {
			cout << "\t\t\tRoba s tim nazivom se ne nalazi u sistemu!\n";
		}
		else {
			temp->prikazSkladista();
		}
	}
}

void Skladiste::teka_racun()
{
	std::ofstream fiskalni_racun("teka_racun.txt");
	for (int i = 0; i < this->getSpremljenoIzSkladista().size(); i++) {
		fiskalni_racun << "__________________________________________________________________________________________________________________________\n\n";
		fiskalni_racun << std::endl;

		fiskalni_racun << "\t\t\t\t\t\tNaziv artikla: " << this->roba[i].getNazivRobe() << endl;
		fiskalni_racun << "\t\t\t\t\t\tVrsta robe: ";
		if (this->roba[i].getVrstaRobe() == tekstil) {
			fiskalni_racun << "Tekstil.\n";
		}
		else {
			fiskalni_racun << "Stvari za kucu.\n";
		}
		fiskalni_racun << "\t\t\t\t\t\tCijena robe: " << this->roba[i].getCijenaRobe() << endl;
	}
}

void Skladiste::prikaziTekaRacun()
{
	for (int i = 0; i < this->getSpremljenoIzSkladista().size(); i++) {
		cout << "__________________________________________________________________________________________________________________________\n\n";
		cout << std::endl;

		cout << "\t\t\t\t\t\tNaziv artikla: " << this->roba[i].getNazivRobe() << std::endl;
		cout << "\t\t\t\t\t\tVrsta robe: ";
		if (this->roba[i].getVrstaRobe() == tekstil) {
			cout << "Tekstil.\n";
		}
		else {
			cout << "Stvari za kucu.\n";
		}
		cout << "\t\t\t\t\t\tCijena robe: " << this->roba[i].getCijenaRobe() << std::endl;
	}
}

int Skladiste::getUkupanBrojRobeNaStanju()
{
	return Skladiste::ukupanBrojRobeNaStanju;
}

void Skladiste::naStanjuJeTrenutnoXRobe()
{
	cout << "\t\t\tU skladistu je trenutno " << Skladiste::ukupanBrojRobeNaStanju << " komada.\n";
}
