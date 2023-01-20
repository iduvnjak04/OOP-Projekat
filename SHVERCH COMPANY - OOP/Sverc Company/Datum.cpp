#include "Datum.h"
#include <iomanip>
#include <iostream>
using namespace std;

Datum::Datum()
{
	this->dan = 1;
	this->mjesec = 1;
	this->godina = 1900;
}


void Datum::setDan()
{
	switch (this->mjesec) {
	case 1:		case 3:		case 5:		case 7:		case 8:		case 10:	case 12:
		do {
			cout << "\t\tUnesite dan: ";
			cin >> this->dan;
			if (this->dan > 31) {
				cout << "[greska] " << this - mjesec << ". mjesec ima samo 31 dan!\n";
			}
			else if (this->dan < 1) {
				cout << "[greska] datum ne moze biti manji od 1!\n";
			}
		} while (this->dan < 1 || this->dan>31);
		break;
	case 4:		case 6:		case 9:		case 11:
		do {
			cout << "\t\tUnesite dan: ";
			cin >> this->dan;
			if (this->dan > 30) {
				cout << "[greska] " << this - mjesec << ". mjesec ima samo 30 dana!\n";
			}
			else if (this->dan < 1) {
				cout << "[greska] datum ne moze biti manji od 1!\n";
			}
		} while (this->dan < 1 || this->dan>30);
		break;
	case 2:
		if (this->godina % 4 == 0) {
			do {
				cout << "\t\tUnesite dan: ";
				cin >> this->dan;
				if (this->dan > 29) {
					cout << "[greska] prestupna godina, drugi mjesec ima samo 29 dana!\n";
				}
				else if (this->dan < 1) {
					cout << "[greska] datum ne moze biti manji od 1!\n";
				}
			} while (this->dan < 1 || this->dan>29);
		}
		else {
			do {
				cout << "\t\tUnesite dan: ";
				cin >> this->dan;
				if (this->dan > 28) {
					cout << "[greska] godina nije prestupna, drugi mjesec ima samo 28 dana!\n";
				}
				else if (this->dan < 1) {
					cout << "[greska] datum ne moze biti manji od 1!\n";
				}
			} while (this->dan < 1 || this->dan>28);
		}
		break;
	default:
        cout << "[gresk] pogresan mjesec!\n";
	}

}

void Datum::setMjesec()
{
	do {
		cout << "\t\tUnesite mjesec: ";
		cin >> this->mjesec;
		if (this->mjesec < 1 || this->mjesec>12) {
			cout << "[greska] pogresno unesen mjesec!\n";
		}
	} while (this->mjesec < 1 || this->mjesec>12);
}

void Datum::setGodina()
{
	do {
		cout << "\n\t\tUnesite godinu: ";
		cin >> this->godina;
		if (this->godina < 1990) {
			cout << "[greska] pogresno unesena godina!\n";
		}
	} while (this->godina < 1900);
}

int Datum::getDan()
{
	return this->dan;
}

int Datum::getMjesec()
{
	return this->mjesec;
}

int Datum::getGodina()
{
	return this->godina;
}

void Datum::postaviDatum()
{
	cout << "\t\tUnesite datum kada ste izvrsili narudzbu: ";
	this->setGodina();
	this->setMjesec();
	this->setDan();
}

void Datum::ispisDatum()
{
	switch (this->getMjesec()) {
	case 1:
		cout << "\t\t" << this->getDan() << ". Januar " << this->getGodina() << ". godine.\n";
		break;

	case 2:
		cout << "\t\t" << this->getDan() << ". Feburar " << this->getGodina() << ". godine.\n";
		break;

	case 3:
		cout << "\t\t" << this->getDan() << ". Mart " << this->getGodina() << ". godine.\n";
		break;

	case 4:
		cout << "\t\t" << this->getDan() << ". April " << this->getGodina() << ". godine.\n";
		break;

	case 5:
		cout << "\t\t" << this->getDan() << ". Maj " << this->getGodina() << ". godine.\n";
		break;

	case 6:
		cout << "\t\t" << this->getDan() << ". Juni " << this->getGodina() << ". godine.\n";
		break;

	case 7:
		cout << "\t\t" << this->getDan() << ". Juli " << this->getGodina() << ". godine.\n";
		break;

	case 8:
		cout << "\t\t" << this->getDan() << ". August " << this->getGodina() << ". godine.\n";
		break;

	case 9:
		cout << "\t\t" << this->getDan() << ". Septembar " << this->getGodina() << ". godine.\n";
		break;

	case 10:
		cout << "\t\t" << this->getDan() << ". Oktobar " << this->getGodina() << ". godine.\n";
		break;

	case 11:
		cout << "\t\t" << this->getDan() << ". Novembar " << this->getGodina() << ". godine.\n";
		break;

	case 12:
		cout << "\t\t" << this->getDan() << ". Decembar " << this->getGodina() << ". godine.\n";
		break;
	}
}

