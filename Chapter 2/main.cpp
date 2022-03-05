#include <iostream>
using namespace std;
int i;
double j;
bool k;
char a;

int count_calls()
{
    static int ctr;
    return ++ctr;
}

int count_call_err()
{
    int ctr;
    //  warning: ‘ctr’ is used uninitialized in this function [-Wuninitialized]
    return ++ctr;
}
class Persion
{
public:
    int hight;
    Persion() {};
};

class Worker
{
public:
    int hight;
};

class Reader
{
public:
    int hight;
    Reader() { hight = 1;};
};
// 全局的对象会自动初始化为0
Persion g_persion;
Worker g_worker;
Reader g_reader;

int main()
{
    cout << "i = " << i << endl; // 0
    cout << "j = " << j << endl; // 0
    cout << "k = " << k << endl; // 0
    cout << "a = " << i << endl; // 与编译器有关，我的环境是0，有些是''
    // 1-10
    for (size_t i = 0; i < 10; i++)
    {
        cout << count_calls() << endl;
    }
    // 1
    cout << count_call_err() << endl;
    // 1
    cout << count_call_err() << endl;

    // cout << ctr   未定义

    cout << g_persion.hight << endl;    // 0
    cout << g_worker.hight << endl;     // 0
    cout << g_reader.hight << endl;     // 1

    Persion l_persion;
    Worker l_worker;
    Reader l_reader;
    cout << l_persion.hight << endl; // -802943304      未初始化成员，所以取到了脏数据
    cout << l_worker.hight << endl;  // -1328497432
    cout << l_reader.hight << endl;  // 1
    return 0;
}
