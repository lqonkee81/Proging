#include "../headers/person.h"

person::person(std::string Name)
{
    this->Name = Name;
    this->Health = 100;
    this->Damage = 0;
}

std::string person::GetName()
{
    return this->Name;
}

int person::Attack()
{
    return this->Damage;
}