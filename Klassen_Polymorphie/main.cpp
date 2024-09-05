#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Mitarbeiter.h"
#include "Dozent.h"
using namespace std;

int main()
{
	string vorname, nachname;
	short alter, semester;
	double gehalt;
	char lehrbefaehigung;


// Zeiger auf die Elternklasse mit einem Objekt der Elternklasse selber
	Person* Zeiger1 = new Person;

	cout << "Person\n======\n";

	// Vorname
	cout << "Vorname: ";
	cin >> vorname;
	Zeiger1->SetVorname(vorname);

	// Nachname
	cout << "Nachname: ";
	cin >> nachname;
	Zeiger1->SetNachname(nachname);

	// Alter
	cout << "Alter: ";
	cin >> alter;
	Zeiger1->SetAlter(alter);

	cout << "Die Person " << Zeiger1->GetVorname() << " " << Zeiger1->GetNachname()
		<< " ist " << Zeiger1->GetAlter() << " Jahre alt.\n\n";




	//Zeiger auf die Elternklasse mit einem Objekt der Kindklasseklasse 
	Person* Zeiger2 = new Student;

	cout << "Student\n=======\n";

	// Vorname
	cout << "Vorname: ";
	cin >> vorname;
	Zeiger2->SetVorname(vorname);

	// Nachname
	cout << "Nachname: ";
	cin >> nachname;
	Zeiger2->SetNachname(nachname);

	// Alter
	cout << "Alter: ";
	cin >> alter;
	Zeiger2->SetAlter(alter);

	// Semester
	cout << "Semester: ";
	cin >> semester;
	Zeiger2->SetSemester(semester);

	cout << "Der Student " << Zeiger2->GetVorname() << " " << Zeiger2->GetNachname()
		<< " ist " << Zeiger2->GetAlter() << " Jahre alt und studiert im " <<
		Zeiger2->GetSemester() << " Semester.\n\n";



	//Zeiger auf die Elternklasse mit einem Objekt der Kindklasseklasse 
	Person* Zeiger3 = new Mitarbeiter;

	cout << "Mitarbeiter\n=======\n";

	// Vorname
	cout << "Vorname: ";
	cin >> vorname;
	Zeiger3->SetVorname(vorname);

	// Nachname
	cout << "Nachname: ";
	cin >> nachname;
	Zeiger3->SetNachname(nachname);

	// Alter
	cout << "Alter: ";
	cin >> alter;
	Zeiger3->SetAlter(alter);

	// Gehalt
	cout << "Gehalt: ";
	cin >> gehalt;
	Zeiger3->SetGehalt(gehalt);

	cout << "Der Mitarbeiter " << Zeiger3->GetVorname() << " " << Zeiger3->GetNachname() << " ist " << Zeiger3->GetAlter() << " Jahre alt und verdient  " <<
		Zeiger3->GetGehalt() << " Euro .\n\n";


	// Objekt der Kindklasse
	Person* Zeiger4 = new Dozent;

	cout << "Dozent\n=======\n";

	// Vorname
	cout << "Vorname: ";
	cin >> vorname;
	Zeiger4->SetVorname(vorname);

	// Nachname
	cout << "Nachname: ";
	cin >> nachname;
	Zeiger4->SetNachname(nachname);

	// Alter
	cout << "Alter: ";
	cin >> alter;
	Zeiger4->SetAlter(alter);

	// Lehrbefaehigung
	cout << "Lehrbefaehigung (j/n): ";
	cin >> lehrbefaehigung;
	if (lehrbefaehigung == 'j')
		Zeiger4->SetLehrbefaehigung(true);
	else
		Zeiger4->SetLehrbefaehigung(false);

	if (Zeiger4->GetLehrbefaehigung())
		cout << "Der Dozent" << Zeiger4->GetVorname() << " " << Zeiger4->GetNachname() << " ist " << Zeiger4->GetAlter() << " Jahre alt und besizt die Lehrbefähigung.\n\n";
	else
		cout << "Der Dozent" << Zeiger4->GetVorname() << " " << Zeiger4->GetNachname() << " ist " << Zeiger4->GetAlter() << " Jahre alt und besizt die Lehrbefähigung nicht.\n\n";





	/*
	* Person person;

	cout << "Person\n======\n";

	// Vorname
	cout << "Vorname: ";
	cin >> vorname;
	person.SetVorname(vorname);

	// Nachname
	cout << "Nachname: ";
	cin >> nachname;
	person.SetNachname(nachname);

	// Alter
	cout << "Alter: ";
	cin >> alter;
	person.SetAlter(alter);

	cout << "Die Person " << person.GetVorname() << " " << person.GetNachname()
		<< " ist " << person.GetAlter() << " Jahre alt.\n\n";




	// Objekt der Kindklasse
	Student student;

	cout << "Student\n=======\n";

	// Vorname
	cout << "Vorname: ";
	cin >> vorname;
	student.SetVorname(vorname);

	// Nachname
	cout << "Nachname: ";
	cin >> nachname;
	student.SetNachname(nachname);

	// Alter
	cout << "Alter: ";
	cin >> alter;
	student.SetAlter(alter);

	// Semester
	cout << "Semester: ";
	cin >> semester;
	student.SetSemester(semester);

	cout << "Der Student " << student.GetVorname() << " " << student.GetNachname()
		<< " ist " << student.GetAlter() << " Jahre alt und studiert im " <<
		student.GetSemester() << " Semester.\n\n";




	// Objekt der Kindklasse
	Mitarbeiter mitarbeiter;

	cout << "Mitarbeiter\n=======\n";

	// Vorname
	cout << "Vorname: ";
	cin >> vorname;
	mitarbeiter.SetVorname(vorname);

	// Nachname
	cout << "Nachname: ";
	cin >> nachname;
	mitarbeiter.SetNachname(nachname);

	// Alter
	cout << "Alter: ";
	cin >> alter;
	mitarbeiter.SetAlter(alter);

	// Gehalt
	cout << "Gehalt: ";
	cin >> gehalt;
	mitarbeiter.SetGehalt(gehalt);

	cout << "Der Mitarbeiter " << mitarbeiter.GetVorname() << " " << mitarbeiter.GetNachname() << " ist " << mitarbeiter.GetAlter() << " Jahre alt und verdient  " <<
		mitarbeiter.GetGehalt() << " Euro .\n\n";






	// Objekt der Kindklasse
	Dozent dozent;

	cout << "Dozent\n=======\n";

	// Vorname
	cout << "Vorname: ";
	cin >> vorname;
	dozent.SetVorname(vorname);

	// Nachname
	cout << "Nachname: ";
	cin >> nachname;
	dozent.SetNachname(nachname);

	// Alter
	cout << "Alter: ";
	cin >> alter;
	dozent.SetAlter(alter);

	// Lehrbefaehigung
	cout << "Lehrbefaehigung (j/n): ";
	cin >> lehrbefaehigung;
	if (lehrbefaehigung == 'j')
		dozent.SetLehrbefaehigung(true);
	else
		dozent.SetLehrbefaehigung(false);

	if (dozent.GetLehrbefaehigung())
		cout << "Der Dozent" << dozent.GetVorname() << " " << dozent.GetNachname() << " ist " << dozent.GetAlter() << " Jahre alt und besizt die Lehrbefähigung.\n\n";
	else
		cout << "Der Dozent" << dozent.GetVorname() << " " << dozent.GetNachname() << " ist " << dozent.GetAlter() << " Jahre alt und besizt die Lehrbefähigung nicht.\n\n";

	*/
	// Objekt der Elternklasse

	return 0;
}
