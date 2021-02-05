#include "../headers/herro.h"
#include "person.h"
#include <string>

using namespace std;

herro::herro(string Name) : person(Name)
{
    this->Name = Name;
};
