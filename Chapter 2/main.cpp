#include <iostream>
using namespace std;
int a = 1;

int main()
{
    int b = 2;
    cout << a << " " << b << endl;   // 1 2
    int a = 3;                       // 此作用域a都指 局部变量a  只有::a才是全局变量a
    cout << a << " " << ::a << endl; // 3 1

    int i, &ri = i;
    i = 5;
    ri = 10;
    cout << i << " " << ri << endl;

    // void* 可以存放任意地址和指针，但不能访问值
    double obj = 3.14, *pd = &obj;
    void *pv = &obj;
    cout << &obj << " " << pd << endl;
    pv = pd;
    cout << pv << endl; // 3个值都是一个地址

    /* 练习题2.23
        已知一指针p，你可以确定该指针是否指向一个有效的对象吗？如果可以，如何确定？如果不可以，请说明原因。
    */
    int *p = new int;
    // *p = 3;
    // delete p;
    cout << *p << endl;
    cout << p << endl;
    // p = NULL;
    // cout << p << endl;

    if (p == nullptr)
    {
        cout << "未初始化变量";
    }

    return 0;
}
