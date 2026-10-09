#include <iostream>
using namespace std;
struct Colectie {
	char* denumire;
	char categorie;
	int nrElemente;
	float pret;
	bool finit;
};

void afisareColectie(Colectie c) {
	cout << c.categorie << "" << c.denumire << " " << c.nrElemente << " " << c.pret << " " << c.finit << endl;

};

void main() {
	std::cout << "Hello World!" << std::endl;
	Colectie c;
	c.categorie = 'A';
	c.finit = true;
	c.nrElemente = 245;
	c.pret = 4000;
	c.denumire = new char[strlen("Ceai") + 1];
	strcpy_s(c.denumire, strlen("Ceai") + 1, "Ceai");
	afisareColectie(c);
	delete[] c.denumire;
}