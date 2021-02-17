#include <iostream>

using namespace std;

bool Check(const long Num)
{
    bool IsDigChet = true;
    int iter = 3;
    long StockNum = Num;

    while (iter > 0)
    {
        if ((StockNum % 10) % 2 != 0)
            IsDigChet = false;
        else
        {
            IsDigChet = true;
            return false;
        }

        StockNum /= 10;

        iter--;
    }

    return true;
}

int main()
{
    int Count = 0;
    long Razn = 0;
    long Max = 0;
    long Min = 100000;

    for (long i = 64444; i <= 77563; ++i)
    {
        if ((i % 9 != 0) && (i % 13 != 0) && (i % 17 != 0))
        {
            if (Check(i))
            {
                Count++;
                Min = min(Min, i);
                Max = max(Max, i);
                Razn = Max - Min;
            }
        }
    }
    cout << "Count: " << Count << endl;
    cout << "Razn: " << Razn << endl;

    return 0;
}