#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

#define DEBUG

void DoWork(int &a)
{

#ifdef DEBUG
    cout << "{ID потока}:\t" << this_thread::get_id() << endl;
    cout << "{Функция}: DoWork" << endl
         << endl;
#endif // DEBUG

    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "=======================\tDoWork STARTED\t=======================\n";

    a *= 2;

    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "=======================\tDoWork STOPPED\t=======================\n";
}

int main()
{
#ifdef DEBUG
    cout << "{ID потока}:\t" << this_thread::get_id() << endl;
    cout << "{Функция}: main" << endl
         << endl;
#endif

    int Per = 15;

    thread t(DoWork, ref(Per));

    t.join();

    cout << "{Per}: " << Per << endl;

    return 0;
}