#pragma once
#include "Person.h"

class Student :
    public Person
{
private:
    short Semester;
public:
    short GetSemester();
    void SetSemester(short Semester);
};

