#include "Meni.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void Meni::setPoruka()
{
	cout << "\n\t\t    ";
	cin.getline(this->poruka, 150);
}

char* Meni::getPoruka()
{
	return this->poruka;
}

void Meni::setPotpis()
{
	cout << "\n\t\t          Mjesto za potpis: ";
	cin.getline(this->potpis, 50);

}

char* Meni::getPotpis()
{
	return this->potpis;
}

void Meni::setOcjena()
{
	cin >> this->ocjena;
	cin.ignore();
}

int Meni::getOcjena()
{
	return this->ocjena;
}

void Meni::adminMeni()
{
	cout << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t         ________________" << endl;
	cout << "\t\t\t        |                |" << endl;
	cout << "\t\t\t        |   ADMIN MENI   |" << endl;
	cout << "\t\t\t        |________________|" << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t ODABERITE REDNI BROJ ZELJENE OPCIJE \n";

	cout << endl;

	cout << "\t\t\t          1. Unos radnika u sistem\n";
	cout << "\t\t\t          2. Pregled radnika\n";
	cout << "\t\t\t          3. Pregled mjesecnih primanja radnika\n";
	cout << "\t\t\t          4. Otpusti radnika\n";
	cout << "\t\t\t          5. Pregled inventara\n";

	cout << "\t\t\t          10. Izlaz\n";

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "_____________________________________________________________________________________________\n\n";

	cout << endl;

	cout << "\t\t\t  _____________________________________\n";
	cout << "\t\t\t |                                     |\n";
	cout << "\t\t\t |  UNESITE REDNI BROJ ZELJENE OPCIJE  |\n";
	cout << "\t\t\t |_____________________________________|\n";

	cout << "\n\n\t\t\t    Birate opciju pod rednim brojem: ";
}

void Meni::uposlenikMeni()
{

	cout << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t         ____________________" << endl;
	cout << "\t\t\t        |                    |" << endl;
	cout << "\t\t\t        |   UPOSLENIK MENI   |" << endl;
	cout << "\t\t\t        |____________________|" << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t ODABERITE REDNI BROJ ZELJENE OPCIJE \n";

	cout << endl;

	cout << "\t\t\t          1. Unos robe u sistem\n";
	cout << "\t\t\t          2. Popunjenost skladista\n";
	cout << "\t\t\t          3. Prikaz skladista\n";
	cout << "\t\t\t          4. Pretraga skladista po nazivu robe\n";

	cout << "\t\t\t          10. Izlaz\n";

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "_____________________________________________________________________________________________\n\n";

	cout << endl;

	cout << "\t\t\t  _____________________________________\n";
	cout << "\t\t\t |                                     |\n";
	cout << "\t\t\t |  UNESITE REDNI BROJ ZELJENE OPCIJE  |\n";
	cout << "\t\t\t |_____________________________________|\n";

	cout << "\n\n\t\t\t    Birate opciju pod rednim brojem: ";
}

void Meni::kupacMeni()
{

	cout << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t         ________________" << endl;
	cout << "\t\t\t        |                |" << endl;
	cout << "\t\t\t        |   KUPAC MENI   |" << endl;
	cout << "\t\t\t        |________________|" << endl;

	cout << endl;
	cout << endl;

	cout << "\t\t\t ODABERITE REDNI BROJ ZELJENE OPCIJE \n";

	cout << endl;

	cout << "\t\t\t          1. Ispis skladista\n";
	cout << "\t\t\t          2. Pretraga skladista po nazivu robe\n";
	cout << "\t\t\t          3. Narudzba\n";
	cout << "\t\t\t          4. Teka racun\n";
	cout << "\t\t\t          5. Feedback [ocjena sistema] \n";

	cout << "\t\t\t          10. Izlaz\n";

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "_____________________________________________________________________________________________\n\n";

	cout << endl;

	cout << "\t\t\t  _____________________________________\n";
	cout << "\t\t\t |                                     |\n";
	cout << "\t\t\t |  UNESITE REDNI BROJ ZELJENE OPCIJE  |\n";
	cout << "\t\t\t |_____________________________________|\n";

	cout << "\n\n\t\t\t    Birate opciju pod rednim brojem: ";
}

void Meni::krajnjiMeni()
{
	system("CLS");

	cout << endl;
	cout << endl;

	cout << "\t\t         _____________________________________" << endl;
	cout << "\t\t        |                                     |" << endl;
	cout << "\t\t        |  HVALA NA KORISTENJU NASEG SISTEMA  |" << endl;
	cout << "\t\t        |_____________________________________|" << endl;

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "\n\n\n\t\t\t\t\t\t  Pritisnite ESC za izlazak iz programa\n";

	system("PAUSE>null");
	system("CLS");
}

void Meni::feedbackMenu()
{

	system("CLS");

	cout << endl;
	cout << endl;

	cout << "\t\t\t         ____________" << endl;
	cout << "\t\t\t        |            |" << endl;
	cout << "\t\t\t        |  FEEDBACK  |" << endl;
	cout << "\t\t\t        |____________|" << endl;

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "\t\t\tOdlicno         ->  * * * * * [5]\n";
	cout << "\t\t\tDobro           ->  * * * *   [4]\n";
	cout << "\t\t\tProsjecno       ->  * * *     [3]\n";
	cout << "\t\t\tIspod prosjeka  ->  * *       [2]\n";
	cout << "\t\t\tLose            ->  *         [1]\n";

	cout << "\n\t\t	    Vasa ocjena za sistem? ";
	this->setOcjena();

	cout << "\n\t\t	  Ostavite kritiku/pohvalu...";
	this->setPoruka();

	cout << "\n\t        Zelite li potpisati feedback? [ 1 - DA; 0 - NE ]: ";
	int izbor;
	cin >> izbor;
	cin.ignore();

	if (izbor == 1) {

		this->setPotpis();

	}

	cout << endl;
	cout << endl;

	this->feedback();

	cout << "\t\t     ______________________________________\n";
	cout << "\t\t    |                                      |\n";
	cout << "\t\t    |    Hvala na ostavljenom feedback-u   |\n";
	cout << "\t\t    |                                      |\n";
	cout << "\t\t    |   ---USPJESNO POHRANJEN FEEDBACK---  |\n";
	cout << "\t\t    |______________________________________|";



}

void Meni::feedback()
{
	ofstream kritika_pohvala("feedback.txt", ios::app);

	kritika_pohvala << "__________________________________________________________________________________________________________________________\n\n";
	kritika_pohvala << endl;

	kritika_pohvala << "\t\t\tKritika/pohvala: " << this->poruka << endl;
	kritika_pohvala << "\t\t\tVasa ocjena: ";

	if (this->ocjena == 1) {
		kritika_pohvala << " 1 [ lose ] " << endl;
	}

	if (this->ocjena == 2) {
		kritika_pohvala << " 2 [ ispod prosjeka ] " << endl;
	}

	if (this->ocjena == 3) {
		kritika_pohvala << " 3 [ prosjecno ] " << endl;
	}

	if (this->ocjena == 4) {
		kritika_pohvala << " 4 [ Dobro ] " << endl;
	}

	if (this->ocjena == 5) {
		kritika_pohvala << " 5 [ Odlicno ] " << endl;
	}

	if (this->potpis != "") {
		kritika_pohvala << "\t\t\tPotpis: " << this->potpis << endl;
	}

	if (this->potpis == "") {
		kritika_pohvala << "\t\t\tKorisnik ne zeli tracati." << endl;
	}

	kritika_pohvala << endl;

	kritika_pohvala << "__________________________________________________________________________________________________________________________\n\n";

	kritika_pohvala.close();

}


void Meni::pocetniMeni()
{
	cout << "\n\n\t\t\t SHVERCH COMPANY\n";
	cout << "\t\t\tZa nastavak pritisnite 1\n";
	cout << "\t\t\tZa izlaz iz programa pritisnite 2\n";
	cout << "\t\t\tIzbor: ";
}