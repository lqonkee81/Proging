#include <iostream>
#include <string>
using namespace std;

bool Check(long Num)
{
    string strNum = to_string(Num);

    int CountNine = 0;
    int TmpSum = 0;

    for (int i = 0; i < strNum.length(); ++i)
    {
        if (strNum[i] == '9')
            CountNine++;
    }

    while (Num > 0)
    {
        if (Num % 10 == 5)
            TmpSum += Num % 10;
        Num /= 10;
    }

    if ((strNum[0] == '8') && (TmpSum % 3 == 0) && (CountNine > 0))
        return true;
    else
        return false;
}

int main()
{
    int Max = 0;
    int Count = 0;

    for (long i = 2848; i <= 109499; ++i)
    {
        if (Check(i))
        {
            Max = i;
            Count++;
        }
    }

    cout << "Count: " << Count << endl;
    cout << "Max: " << Max << endl;

    return 0;
}

/*

Рассматривается множество целых чисел, принадлежащих числовому отрезку [2848; 109499], которые имеют в своей записи цифру 9, 
и у которых сумма цифр больших 5 – кратна трём. Найдите количество таких чисел и наибольшее такое число, начинающееся на 8. 
В ответе запишите два целых числа: сначала количество, затем наибольшее такое число, начинающееся на 8.

*/