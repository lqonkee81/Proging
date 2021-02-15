#include <iostream>
#include <vector>

using namespace std;

vector<long> Dels;

bool Check(const long Num)
{
    long StockNum = Num;

    for (int i = 1; i <= StockNum; ++i)
    {
        if (StockNum % i == 0)
        {
            Dels.push_back(i);
        }
    }

    if (Dels.size() == 6)
        return true;
    else
        return false;
}

int main()
{
    for (long i = 100812; i <= 100923; ++i)
    {
        if (Check(i))
        {
            cout << "Number: " << i << endl;
            cout << "Dels: ";
            for (int i = 0; i < Dels.size(); ++i)
                cout << Dels[i] << " ";
            cout << endl
                 << endl;
        }

        Dels.clear();
    }

    return 0;
}