//Хуй знает зачем, но надо. И я знаю, что так делать нельзя, но мне льзя
#pragma once

//Libs
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <chrono>
#include <thread>

//Classes
#include "../headers/herro.h"
//#include "../headers/person.h"

//Defines
#define DEBUG

using namespace std;

vector<herro> Players;

void Info();
void Setup();

int main()
{
    Info();
    Setup();

    return 0;
}

void Info()
{
    system("clear");
    cout << "Добро пожаловать в мою игру!\n\n";
    cout << "Для начала васм надо будет выбрать себе персонажей их имя!\n";
}

void Setup()
{
    //Temp vars
    int *PlayerCounts = new int;
    string *PlayerName = new string;

    vector<string> vPlayerNames;

    cout << "{Введите кол-во игроков}: ";
    cin >> *PlayerCounts;

    for (size_t i = 0; i < *PlayerCounts; ++i)
    {
        cout << "{Введите имя игрока " << i + 1 << "}: ";
        cin >> *PlayerName;
        vPlayerNames.push_back(*PlayerName);
    }

    for (size_t i = 0; i < *PlayerCounts; ++i)
        Players.push_back(herro(vPlayerNames[i]));

#ifdef DEBUG
    for (size_t i = 0; i < Players.size(); ++i)
        cout << "{Имя игрока " << i + 1 << "}: " << Players[i].GetName() << endl;
    this_thread::sleep_for(chrono::seconds(3));
#endif

    
    delete PlayerCounts;
    delete PlayerName;
}