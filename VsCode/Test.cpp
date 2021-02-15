#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

//#define Debug

int CountDels = 0;
vector<ll> Dels;
bool Check(ll Num)
{
#ifdef Debug
    cout << "Num: " << Num << endl;
#endif
    CountDels = 0;
    Dels.clear();

    for (ll j = 2; j * j <= Num; ++j)
    {
        if (Num % j == 0)
        {
            if (j % 2 == 0)
                Dels.push_back(j);
            if (Dels.size() > 3)
                break;
        }
    }

    for (ll j = 2; j * j < Num; ++j)
    {
        if (Num % j == 0)
        {
            if (j % 2 == 0)
                Dels.push_back(Num / j);
            if (Dels.size() > 3)
                break;
        }
    }

    if (Dels.size() == 3)
    {
#ifdef Debug
        cout << "OK" << endl;
#endif
        return true;
    }
    else
        return false;
}

int main()
{
    vector<ll> Nums;
    for (ll i = 0; i <= 100000; ++i)
    {
        if (Check(i))
            Nums.push_back(i);
    }

    sort(Nums.begin(), Nums.end());

    for (int i = 0; i < Nums.size(); ++i)
        cout << Nums[i] << endl;

    return 0;
}