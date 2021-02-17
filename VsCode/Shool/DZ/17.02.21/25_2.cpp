#include <iostream>
#include <vector>

using namespace std;

#define Debug

typedef long long ll;

vector<ll> Nums;
vector<ll> Dels;

int main()
{
    for (ll i = 101000000; i <= 102000000; i += 2)
    {

#ifdef Debug
        cout << "\nI: " << i;
#endif
        Dels.clear();
        for (ll j = 1; j * j <= i; ++j)
        {
            if (j % 2 == 0)
            {
                if (i % j == 0)
                {
                    Dels.push_back(j);
                    if (i / j != j)
                        Dels.push_back(i / j);
                }
                if (Dels.size() > 3)
                    break;
            }

            if (Dels.size() == 3)
            {
#ifdef Debug
                cout << " OK" << endl;
#endif
                Nums.push_back(i);
            }
        }
    }

    for (int i = 0; i < Nums.size(); ++i)
        cout << "Kek: " << Nums[i] << endl;

    return 0;
}