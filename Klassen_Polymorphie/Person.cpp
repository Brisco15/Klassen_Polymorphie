#include "Person.h"

string Person::GetVorname()
{
    // TODO: Fügen Sie hier Ihren Implementierungscode ein..
    return Vorname;
}

void Person::SetVorname(string Vorname)
{
    // TODO: Fügen Sie hier Ihren Implementierungscode ein..
    this->Vorname = Vorname;
}

string Person::GetNachname()
{
    // TODO: Fügen Sie hier Ihren Implementierungscode ein..
    return Nachname;
}

void Person::SetNachname(string Nachname)
{
    // TODO: Fügen Sie hier Ihren Implementierungscode ein..
    this->Nachname = Nachname;
}

short Person::GetAlter()
{
    // TODO: Fügen Sie hier Ihren Implementierungscode ein..
    return Alter;
}

void Person::SetAlter(short Alter)
{
    // TODO: Fügen Sie hier Ihren Implementierungscode ein..
    this->Alter = Alter;
}

void Person::SetSemester(short Semester)
{
   
}

short Person::GetSemester()
{
    return 0;
}

void Person::SetGehalt(double Gehalt)
{
}

double Person::GetGehalt()
{
    return 0;
}

void Person::SetLehrbefaehigung(bool Lehrbefaehigung)
{
}

bool Person::GetLehrbefaehigung()
{
    return 0;
}
