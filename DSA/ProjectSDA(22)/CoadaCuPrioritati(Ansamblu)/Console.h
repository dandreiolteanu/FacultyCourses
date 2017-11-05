#pragma once
#include "Coada.h"
#include "Console.h"

class Console {
private:
	Coada<Student>* coadaStudenti;
	int dimensiune=0;
public:
	Console(Coada<Student> *_coada) : coadaStudenti{ _coada } {};
	void adauga();
	void printMenu();
	void run();
	void sterge();
	void afiseaza();
	void findMax();
	void makeEmpty();
	int getDimensiune();
	
};
