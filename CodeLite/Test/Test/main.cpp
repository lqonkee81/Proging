#include <iostream>
#include <thread>

using namespace std;

void f1()
{
    cout << "F1\n";
}

void f2()
{
    cout << "F2\n";
}

int main()
{
    thread t1(f1);
    thread t2(f2);

    return 0;
}
