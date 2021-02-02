#pragma once

#include <iostream>
#include <string>

#include "../headers/herro.h"
#include "../headers/person.h"

using namespace std;

void Info();

int main()
{
    Info();

    herro h1("GY");
    cout << h1.GetName() << endl;

    person p1("He");

    return 0;
}

void Info()
{
    system("clear");
    cout << "Добро пожаловать в мою игру!\n\n";
    cout << "Для начала васм надо будет выбрать себе персонажей их имя!\n";
}
