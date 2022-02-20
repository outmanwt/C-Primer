#include <iostream>
using namespace std;
int main()
{
	/* 练习1.9
		int sum = 0, i = 50;
		while (i <= 100)
		{
			sum += i;
			i++;
		}
		cout << sum << endl;
	*/
	/* 练习1.10
		int i = 10;
		while (i >= 0)
		{
			cout << i-- << endl;
		}
	*/
	/* 练习1.11
		int i = 0, j = 0, low = 0, high = 0;
		cout << "请输入两个整数:" << endl;
		cin >> i >> j;
		low = i > j ? j : i;
		high = low != i ? i : j;
		while (low <= high)
		{
			cout << low++ << endl;
		}
	*/
	/* 练习1.13
		int sum = 0;
		for(auto i = 50; i <= 100; i++)
		{
			sum += i;
		}
		cout << sum << endl;

		for (auto i = 10; i >= 0; i--)
		{
			cout << i << endl;
		}

		int i = 0, j = 0, low = 0, high = 0;
		cout << "请输入两个整数:" << endl;
		cin >> i >> j;
		low = i > j ? j : i;
		high = low != i ? i : j;
		for (; low <= high; low++)
		{
			cout << low << endl;
		}
	*/

	int sum = 0, value = 0;
	// 当遇到文件结束符时返回错误，或者类型不匹配时也会报错
	while (cin >> value)
	{
		sum += value;
	}
	cout << sum << endl;
	return 0;
}