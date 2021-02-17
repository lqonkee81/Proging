#include <iostream>
using namespace std;

int main()
{
    long Num = 101999894;

    for (long i = 1; i <= Num; ++i)
    {
        if (i % 2 == 0)
        {
            if (Num % i == 0)
            {
                cout << Num << " % " << i << " = " << Num % i << endl;
            }
        }
    }
    return 0;
}