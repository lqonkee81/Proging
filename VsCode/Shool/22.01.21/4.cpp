#include <iostream>
#include <vector>
using namespace std;

bool Check(const long Num)
{
    int Count = 0;

    for (long i = 1; i <= Num; ++i)
    {
        if (Num % i == 0)
            Count++;
        if (Count > 2)
            return false;
    }

    if (Count == 2)
        return true;
    else
        return false;
}

int main()
{
    vector<long> Nums;
    for (long i = 1532040; i <= 1532160; ++i)
    {
        if (Check(i))
        {
            Nums.push_back(i);
        }
    }

    for (int i = Nums.size() - 1; i >= 0; --i)
    {
        cout << "Nuber " << Nums.size() - i << ": " << Nums[i] << endl;
    }

    return 0;
}