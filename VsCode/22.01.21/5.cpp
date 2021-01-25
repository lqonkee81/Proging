#include <iostream>
#include <string>

using namespace std;

bool Check(const long Num)
{
    string strNum = to_string(Num);

    bool chk1 = true;
    bool chk2 = true;
    int iter = 5;
    long StockNum = Num;

    /* for (int i = 0; i < 3; ++i)
    {
        if ((static_cast<int>(strNum[i]) - static_cast<int>('0')) % 2 == 0)
            chk1 = true;
        else
            chk1 = false;
    }

    for (int i = 3; i <= 5; ++i)
        if ((static_cast<int>(strNum[i]) - static_cast<int>('0')) % 2 != 0)
            chk2 = true;
        else
            chk2 = false;

    if ((chk1 == true) && (chk2 == true))
        return true;
    else
        return false;*/

    while (iter > 2)
    {
        if ((StockNum % 10) % 2 != 0)
            chk1 = true;
        else
            return false;
        StockNum /= 10;
        iter--;
    }

    while (iter > 0)
    {
        if ((StockNum % 10) % 2 == 0)
            chk1 = true;
        else
            return false;
        StockNum /= 10;
        iter--;
    }

    return chk1;
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