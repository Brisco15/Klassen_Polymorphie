#pragma once
#include "Person.h"

class Dozent :
    public Person
{
private:
    bool Lehrbefaehigung;
public:
    bool GetLehrbefaehigung();
    void SetLehrbefaehigung(bool Lehrbefaehigung);
};

