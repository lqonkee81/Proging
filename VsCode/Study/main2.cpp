#include <iostream>
#include <string>

using namespace std;

class A
{
public:
    A()
    {
        msg = "Пустое сообщение!";
    }

    A(string msg)
    {
        this->msg = msg;
    }

    ~A()
    {
    }

    void PrintMsg()
    {
        cout << msg << endl;
    }

private:
    string msg;
};

class B : public A
{
public:
    B()
    {
    }

    ~B()
    {
    }
};

int main()
{
    /* B value;
    value.PrintMsg();*/

    A a;
    a.PrintMsg();

    return 0;
}
