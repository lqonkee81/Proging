#include <iostream>
using namespace std;

int main()
{
    int Max = 0;
    int Count = 0;

    for (int i = 1033; i <= 7737; ++i)
    {
        if (i % 5 == 0)
        {
            if ((i % 11 != 0) && (i % 17 != 0) && (i % 19 != 0) && (i % 23 != 0))
            {
                Count++;
                Max = max(i, Max);
            }
        }
    }

    cout << "{Count}: " << Count << endl;
    cout << "{Max}: " << Max << endl;

    return 0;
}