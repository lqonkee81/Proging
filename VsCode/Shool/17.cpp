#include <iostream>
//#include <vector>
#include <string>
#include <thread>
#include <chrono>
//769 445
using namespace std;

int Count = 471;

bool Check(int num)
{
    if (num % 2 == num % 4)
        return true;
    else
        return false;
}

int main()
{
    int count = 0;
    int min_num = 10000;

    for (int i = 3712; i <= 8432; ++i)
    {
        if (((i % 13 == 0) && (i % 14 == 0)) || (i % 15 == 0))
        {
            if (Check(i))
            {
                count++;
                min_num = min(i, min_num);
            }
        }
    }

    cout << "Count: " << Count << endl;
    cout << "Min: " << min_num << endl;

    return 0;
}