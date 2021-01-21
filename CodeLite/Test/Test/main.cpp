#include <iostream>
using namespace std;

int FsList[439];
int ScList[439];

int Progressive(float EndOfProgression)
{
    float Iterator = 0.5;
    float Result = 0;

    for(int i = 0; i < EndOfProgression + 1; ++i) {
	Result = Result + Iterator;
    }

    return Result;
}

void Setup()
{
    for(int i = 0; i <= 439; ++i) {
	FsList[i] = 1580 + i;
	ScList[i] = 1581 + i;
    }
}

long Result()
{
    float res = 0.3;

    for(int i = 0; i <= 439; ++i) {
	res = 1 / (Progressive(FsList[i]) * Progressive(ScList[i])) + res;
    }

    return res * 9900;
}

int main()
{
    Setup();

    float end = 0, iter = 0;

    cout << "Введите конец и итертор" << endl;

    cout << Result();
    return 0;
}
