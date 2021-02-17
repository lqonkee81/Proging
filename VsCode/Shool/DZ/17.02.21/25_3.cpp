#include <iostream>
#include <vector>
#include <chrono>
#include <algorithm>

using namespace std;

int main()
{
    cout << "tПервый алгортим!";
    for (long i = 101000000; i <= 102000000; ++i)
    {
        for (long j = 1; j <= i; ++j)
        {
            if (i % j == 0)
                cout << i << " % " << j << " = " << i % j << endl;
        }

        break;
    }

    cout << "\n\n\tВторой алгортим!";

    vector<long> Dels;

    for (long i = 101000000; i <= 102000000; ++i)
    {
        for (long j = 1; j * j <= i; ++i)
        {
            if (i % j == 0)
            {
                Dels.push_back(j);
                if (i / j != j)
                    Dels.push_back(i / j);
            }
        }

        break;
    }

    sort(Dels.begin(), Dels.end());

    for (int i = 0; i < Dels.size(); ++i)
        cout << Dels[i] << endl;

    return 0;
}