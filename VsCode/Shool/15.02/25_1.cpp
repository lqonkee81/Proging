#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <algorithm>

using namespace std;

//ДЕФАЙНЫ НЕ СТРИРАТЬ! РУКИ ВЫРВУ! ОНИ ДОЛЖНЫ БЫТЬ ЗАКОМЕНЧЕНЫ!
//#define Debug_I_Num
//#define Debug_Vector_PushBack
//#define Other_Debug

vector<long> V1;
vector<long> V2;
vector<long> V3;
vector<long> V4;
vector<long> V5;
vector<long> V6;
vector<long> V7;

vector<long> Dels;

void Function(long Start, long End, vector<long> &Nums)
{

    for (long i = Start; i < End; ++i)
    {
#ifdef Debug_I_Num
        cout << "{i from " << this_thread::get_id() << "}: " << i << endl;
#endif

        Dels.clear();
        for (long j = 2; j * j <= i; j += 2)
        {
            if (j % 2 == 0)
            {
                if (i % j == 0)
                    Dels.push_back(j);
                if (i / j != j)
                    Dels.push_back(i / j);
                if (Dels.size() > 3)
                    break;
            }
        }

        if (Dels.size() == 3)
        {
#ifdef Debug_Vector_PushBack
            cout << "\t{Push in 'Nums'}: " << i << endl;
#endif
            Nums.push_back(i);
        }
    }
}

int main()
{
    //Создаем кучу потоков
    thread t1(Function, 101000000, 101125000, ref(V1));
    thread t2(Function, 101125000, 101250000, ref(V2));
    thread t3(Function, 101250000, 101375000, ref(V3));
    thread t4(Function, 101375000, 101500000, ref(V4));
    thread t5(Function, 101500000, 101625000, ref(V5));
    thread t6(Function, 101625000, 101750000, ref(V6));
    thread t7(Function, 101750000, 102000000, ref(V7));

    //Тут ждем, пока эта куча закончит работу
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    t6.join();
    t7.join();

#ifdef Other_Debug
    cout << "ОПА" << endl;
#endif

    //Тут просто складываем все в один вектор
    for (int i = 0; i < V2.size(); ++i)
        V1.push_back(V2[i]);
    V2.~vector();

    for (int i = 0; i < V3.size(); ++i)
        V1.push_back(V3[i]);
    V3.~vector();

    for (int i = 0; i < V4.size(); ++i)
        V1.push_back(V4[i]);
    V4.~vector();

    for (int i = 0; i < V4.size(); ++i)
        V1.push_back(V4[i]);
    V4.~vector();

    for (int i = 0; i < V5.size(); ++i)
        V1.push_back(V5[i]);
    V5.~vector();

    for (int i = 0; i < V6.size(); ++i)
        V1.push_back(V6[i]);
    V6.~vector();

    for (int i = 0; i < V7.size(); ++i)
        V1.push_back(V7[i]);
    V7.~vector();

    sort(V1.begin(), V1.end());

    // system("clear");

    for (int i = 0; i < V1.size(); ++i)
        cout << "{V1[" << i << "]}: " << V1[i] << endl;

    return 0;
}

//125000