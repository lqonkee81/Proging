#include <iostream>
#include <string>
using namespace std;

bool Check(long Num)
{
    int CountSevens = 0;

    string strNum = to_string(Num);

    for (int i = 0; i < strNum.length(); ++i)
    {
        if (strNum[i] == '7')
            CountSevens++;
    }

    if ((CountSevens >= 2) && (Num % 17 == 0))
        return true;
    else
        return false;
}

int main()
{
    long Max = 0;
    int Count = 0;

    for (long i = 333666; i <= 666999; ++i)
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

5)Рассматривается множество целых чисел, принадлежащих числовому отрезку [333666; 666999], которые удовлетворяют следующим условиям: 
а) в числе есть 2 цифры 7; 
б) число кратно 17. 
Найдите наибольшее из таких чисел и их количество.

*/