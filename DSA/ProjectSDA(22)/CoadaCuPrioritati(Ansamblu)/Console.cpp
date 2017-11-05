#include "Console.h"

void Console::adauga()
{
	string nume, prenume;
	float medie;
	cout << " Type the last name of the student " << '\n';
	cin >> nume;
	cout << " Type the first name of the student " << '\n';
	cin >> prenume;
	cout << " Type the final grade( 0-2 decimals ); " << '\n';
	cin >> medie;

	cout << '\n';
	cout << '\n';
	cout << '\n';

	Student x(nume, prenume, medie);
	coadaStudenti->push(x);	
	cout << "Student added!\n";

}

void Console::printMenu()
{
	cout << '\n';
	cout << '\n';
	cout << "		_____Main Menu_____ " << '\n';
	cout << '\n';
	cout << "1) Add a student in the scolarship list " << '\n';
	cout << "2) Delete the most prioritar student " << '\n';
	cout << "3) Print all the students which have a scolarship" << '\n';
	cout << "4) Print the student with the biggest final grade" << '\n';
	cout << "5) Empty the list of students" << '\n';
	cout << "		_______Exit_______" << '\n';
	cout << "		   type X or 0 " << endl;
	cout << '\n';
	cout << '\n';
}

void Console::run()
{
	int ok = 1;
	while (ok) {
		printMenu();
		cout << "Your command is...";
		cout << '\n';

		char opt;
		cin >> opt;
		cin.get();
		if (opt == '1')
		{
			adauga();
		}
		else
			if (opt == '2')
			{
				sterge();
			}
			else
				if (opt == '3') {
					afiseaza();
				}
				else if (opt == '4') {
					findMax();
				}
				else
					if (opt == '5') {
						makeEmpty();
					}
			else
				if (opt == 'X' || opt == 'x' || opt == 'exit' || opt == '0')
					break;
				else
					cout << " Invalid option " << '\n';
	}
}

void Console::sterge()
{
	auto student = coadaStudenti->pop();
	cout << "Student " << student.getNume() << " was removed from the list\n";

}

void Console::afiseaza() {
	Heap<Student>* stud = new Heap<Student>(*((Heap<Student>*)coadaStudenti));
	for (int i = stud->getSize(); i != 0; i--) {
		cout << stud->pop() << endl;
	}
}
void Console::findMax() {
	Heap<Student>* stud = new Heap<Student>(*((Heap<Student>*)coadaStudenti));
	cout << stud->pop() << endl;
}
void Console::makeEmpty() {
	
}