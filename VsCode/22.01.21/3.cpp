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
    for (long i = 4202865; i <= 4202923; ++i)
    {
        if (Check(i))
        {
            Nums.push_back(i);
        }
    }

    for (int i = 0; i < Nums.size(); ++i)
    {
        cout << "Nuber " << i + 1 << ": " << Nums[i] << endl;
    }

    return 0;
}