#include "Data.h"

using namespace std;

Data::Data()
{
	giorno = 1;
	mese = 1;
	anno = 2000;
}

Data::Data(int g, int m, int a) {
	giorno = g;
	mese = m;
	anno = a;
}

Data::Data(const Data& h) {
	giorno = h.giorno;
	mese = h.mese;
	anno = h.anno;
}

Data::~Data() {
}

int Data::getG() const {
	return giorno;
}

int Data::getM() const {
	return mese;
}

int Data::getA() const {
	return anno;
}


void Data::setG(int G) {
	giorno = G;
}

void Data::setM(int M) {
	mese = M;
}

void Data::setA(int A) {
	anno = A;
}

void Data::setGMA(int G, int M, int A) {
	giorno = G;
	mese = M;
	anno = A;
}

void Data::print() const {
	cout << giorno << "/" << mese << "/" << anno << endl;
}

void Data::inserisci() {
	bool lucio = false;
	do {
		cout << "Inserire giorno" << endl;
		cin >> giorno;
		cout << "Inserire mese" << endl;
		cin >> mese;
		cout << "Inserire anno" << endl;
		cin >> anno;
		if (giorno < 32 && giorno > 0 && mese > 0 && mese < 13) {
			lucio = true;
		}
	} while (lucio == false);
}
