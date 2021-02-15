#include <iostream>
using namespace std;
int main()
{
    int s, n = 0;
    cin >> s;
    while (s < 1000)
    {
        s = s * 2;
        n = n + 5;
    }
    cout << n << endl;
    return 0;
}

//250