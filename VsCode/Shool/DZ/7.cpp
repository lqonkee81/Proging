#include <iostream>
using namespace std;

bool Check(int Num)
{
    int Sum = 0;
    int Multiply = 1;
    int StockNum = Num;

    while (Num > 0)
    {
        Sum += Num % 10;
        Multiply *= Num % 10;

        Num /= 10;
    }

    if (Multiply == 0)
        return false;
    else
    {
        if ((StockNum % Sum == 0) && (StockNum % Multiply == 0))
            return true;
        else
            return false;
    }
}

int main()
{
    int Count = 0;
    int Max = 0;

    for (int i = 1111; i <= 9999; ++i)
    {
        if (Check(i))
        {
            Count++;
            Max = i;
        }
    }

    cout << "Count: " << Count << endl;
    cout << "Max: " << Max << endl;

    return 0;
}

/*

Рассматривается множество целых чисел, принадлежащих числовому отрезку [1111; 9999],
которые кратны одновременно сумме и произведению своих цифр. Найдите количество таких чисел и максимальное из них.
В ответе запишите два целых числа: сначала количество, затем – максимальное число.

*/