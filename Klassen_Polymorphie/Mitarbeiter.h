#pragma once
#include "Person.h"

class Mitarbeiter :
    public Person
{
    double Gehalt;
public:
    double GetGehalt();
    void SetGehalt(double Gehalt);
};

