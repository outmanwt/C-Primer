#include <iostream>
using namespace std;
int main()
{
    unsigned a = -1;
    cout << "unsigned a = -1" << endl;
    cout << "size a = " << a << endl;

    unsigned u = 10, u2 = 42;
    int i = 10, i2 = 42;

    cout << "unsigned u = 10, u2 = 42" << endl;
    cout << "int i = 10, i2 = 42" << endl;

    cout << "u2 - u:" << u2 - u << endl;   // 32
    cout << "u - u2:" << u - u2 << endl;   // 2^32 - 32
    cout << "i2 - i = " << i2 - i << endl; // 32
    cout << "i - i2 = " << i - i2 << endl; // -32
    cout << "i - u = " << i - u << endl;   // 0
    cout << "u - i = " << u - i << endl;   // 0
    cout << "a - i = " << a - i << endl;   // 2^32 - 1 - 10

    cout << "size 'a' = " << sizeof('a') << endl;
    cout << "size wchar_t = " << sizeof(wchar_t) << endl;
    cout << "size L'a' = " << sizeof(L'a') << endl;
    cout << "size \"a\" = " << sizeof("a") << endl;
    cout << "size L\"a\" = " << sizeof(L"a") << endl;

    cout << sizeof(10L) << endl; //8

    return 0;
}
