#include "Teste.h"

void testCoada()
{
	Coada<int> *coada = new Heap<int>(10);

	coada->push(1);
	coada->push(4);
	coada->push(3);
	auto el = coada->pop();
	assert(el == 4);
	delete coada;
	Coada<Student> *coadaSt = new Heap<Student>(10);
	Student st1{ "Nume1","Prenume1",9 };
	Student st2{ "Nume2","Prenume2",3 };
	Student st3{ "Nume3","Prenume3",4 };
	Student st4{ "Nume4","Prenume4",6.5 };
	coadaSt->push(st1);
	coadaSt->push(st4);
	coadaSt->push(st3);
	coadaSt->push(st2);

	Student stud = coadaSt->pop();
	assert(stud.getNume() == "Nume1");
	delete coadaSt;

}
