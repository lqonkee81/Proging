#include <iostream>
#include <string>
using namespace std;

bool Check(int Num)
{
    string strNum;
    string Check1;

    strNum.clear();
    Check1.clear();

    while (Num > 0)
    {
        strNum = to_string(Num % 8) + strNum;
        Num /= 8;
    }

    Check1 = strNum[strNum.length() - 1] + strNum[strNum.length()];

    if ((Check1 == "15") || (Check1 == "17"))
        return true;
    else
        return false;
}

int main()
{
    int Count = 0;
    int Max = 0;

    for (int i = 2371; i <= 9432; ++i)
    {
        if ((i % 3 != 0) && (i % 5 != 0))
        {
            if (Check(i))
            {
                Count++;
                Max = i;
            }
        }
    }

    cout << "Count: " << Count << endl;
    cout << "Max: " << Max << endl;

    return 0;
}

/*

Рассматривается множество целых чисел, принадлежащих числовому отрезку [2371; 9432], которые удовлетворяют следующим условиям:
− запись в восьмеричной системе счисления заканчивается на 15 или 17;
− не кратны 3 и 5.
Найдите количество таких чисел и максимальное из них.

*/