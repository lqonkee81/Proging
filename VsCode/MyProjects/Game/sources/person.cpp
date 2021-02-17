#include "../headers/person.h"

using namespace std;

person::person(string Name)
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

void person::SetHealth(int Health)
{
    this->Health = Health;
}

int person::GetHealth()
{
    return this->Health;
}