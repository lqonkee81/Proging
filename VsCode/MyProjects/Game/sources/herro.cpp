#include "../headers/herro.h"
#include "person.h"
#include <string>

herro::herro(std::string Name) : person(Name)
{
    this->Name = Name;
};

void herro::setHealth(int Health)
{
    this->Health = Health;
}
