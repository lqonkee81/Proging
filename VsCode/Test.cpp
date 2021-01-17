#include <iostream>
#include <sstream>

using namespace std;

void Kek(long Num)
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

    Check1 = strNum.substr(strNum.length() - 2);

    cout << strNum << endl;
    cout << Check1 << endl;
}

int main()
{
    long kk;
    cout << "{Cin >> kk}: ";
    cin >> kk;
    Kek(kk);

    return 0;
}