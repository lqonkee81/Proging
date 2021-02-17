#include <iostream>

using namespace std;

int CountDel = 0;

bool Check(int number)
{
    CountDel = 0;

    for (int i = 1; i <= number; ++i)
    {
        if (number % i == 0)
            CountDel++;
    }

    if (CountDel > 17)
        return true;
    else
        return false;
}

int main()
{
    int count = 0;
    int minimum = 51000;

    for (int i = 10001; i <= 50000; ++i)
    {
        if (Check(i))
        {
            count++;
            minimum = min(i, minimum);
        }
    }

    cout << "{Count}: " << count << endl;
    cout << "{Minimum}: " << minimum << endl;
    return 0;
}