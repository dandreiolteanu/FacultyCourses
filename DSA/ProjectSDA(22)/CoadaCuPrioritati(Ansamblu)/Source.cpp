#include "Coada.h"
#include "Student.h"
#include "Console.h"
#include "Teste.h"
int main() {
	testCoada();
	Coada<Student> *c = new Heap<Student>(100);
	Console ui{ c };
	ui.run();

	return 0;
}