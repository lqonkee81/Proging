#include <iostream>
using namespace std;

int sum = 0;

void F(int n = 0)
{
    sum += n + 1;

    if (n > 1)
    {
        sum += n + 5;
        F(n - 1);
        F(n - 2);
    }
}

int main()
{
    F(30);
    cout << sum << endl;
    return 0;
}