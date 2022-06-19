#include <iostream>
using std::cout;
using std::endl;

int main()
{
	/*
		练习3.1,使用恰当的using 声明重做 1.4.1节和2.6.2节的练习。
		1、编写程序，使用while循环将50到100整数相加。
		2、编写程序与，使用递减运算符在循环中按递减顺序打印出10到0之间的整数。
		3、编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。
	*/
	int sum = 0;
	for (size_t i = 50; i < 100; i++)
		sum += i;
	cout << "50~100的和为:" << sum << endl;

	for (auto i = 10; i > 0; i--)
		cout << i << ",";
	return 0;
}