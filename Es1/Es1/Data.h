#include <iostream>

class Data
{
private:
	int giorno;
	int mese;
	int anno;

public:
	Data();
	Data(int g, int m, int a);
	Data(const Data& h);

	~Data();

	int getG() const;
	int getM() const;
	int getA() const;

	void setG(int G);
	void setM(int M);
	void setA(int A);
	void setGMA(int G, int M, int A);

	void print()const;
	void inserisci();
};