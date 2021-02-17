#include <iostream>
using namespace std;

//#define Debug
//#define Debug2

bool Check(int Num)
{
    int Dels[4]{11, 13, 17, 19};
    int DelCount = 0;

    for (int i = 0; i < 4; ++i)
    {
        if (Num % Dels[i] == 0)
            DelCount++;
    }

    if (DelCount == 2)
    {

#ifdef Debug2
        cout << "Num: " << Num << endl;
#endif // DEBUG
        return true;
    }
    else
        return false;
}

int main()
{

    int Count = 0;
    int Min = 30000;

    for (int i = 11000; i <= 22000; ++i)
    {
#ifdef Debug
        cout << "I: " << i << endl;
#endif // DEBUG

        if (Check(i))
        {
            Count++;
            Min = min(Min, i);
        }
    }

    cout << "Count: " << Count << endl;
    cout << "Min: " << Min << endl;

    return 0;
}