#include <iostream>
using namespace std;

//#define Debug

int main()
{
#ifdef Debug
    cout << "kek" << endl;
#endif

    int s, n = 0;

    for (int i = 0; i < 300; ++i)
    {
        n = 0;
        s = i;
        while (s < 1000)
        {
            s = s * 2;
            n = n + 5;
        }

#ifdef Debug
        cout << "{Number}: " << i << endl;
        cout << "{n}: " << n << endl;
#endif

        if (n == 10)
        {
            cout << i << endl;
            break;
        }
    }

    //cout << n << endl;
    return 0;
}