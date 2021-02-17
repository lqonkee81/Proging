#include <iostream>
using namespace std;

unsigned long Count(unsigned long a)
{
    unsigned long count = 1, k = 0, i;
    if (a == 1 || a == 2)
        return a;

    while ((a & 1) == 0)
    {
        k++;
        a >>= 1;
    }

    if (a == 1)
        return k + 1;
    else
        count = k + 1;

    for (i = 3; i * i <= a; i += 2)
    {
        k = 0;
        while (a % i == 0)
        {
            k++;
            a /= i;
        }
        count *= (k + 1);
    }

    if (a > 1)
        count <<= 1;
    return count;
}

int main()
{
    cout << Count(101999894) << endl;
    return 0;
}