#pragma once
#include <string>
using namespace std;

class Person
{
	string Vorname, Nachname;
	short Alter;

public:
	string GetVorname();
	void SetVorname(string Vorname);

	string GetNachname();
	void SetNachname(string Nachname);

	short GetAlter();
	void SetAlter(short Alter);

	virtual void SetSemester(short Semester);
	virtual short GetSemester();

	virtual void SetGehalt(double Gehalt);
	virtual double GetGehalt();

	virtual void SetLehrbefaehigung(bool Lehrbefaehigung);
	virtual bool GetLehrbefaehigung();
};

