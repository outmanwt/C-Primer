#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>
#include "Sales_item.h"
using namespace std;
int main()
{
	/*练习1.20
		int num = 0;
		stringstream outStr;
		Sales_item item;
		while (cin >> item)
		{
			outStr << item << endl;
			num++;
		}
		cout << outStr.str() << endl;
	*/
	/*练习1.22
		Sales_item sum;
		Sales_item item;
		while (cin >> item)
		{
			sum += item;
		}
		cout << sum << endl;
	*/
	/*练习1.24
		unordered_map<string, unsigned int> m;
		Sales_item item;
		while (cin >> item)
		{
			if (m.count(item.isbn()))
				m[item.isbn()]++;
			else
				m[item.isbn()] = 1;
		}
		if (m.empty())
		{
			cerr << "NO data!" << endl;
			return -1;
		}
		for (auto x : m)
			cout << "ISBN: " << x.first << " count:" << x.second << endl;
	*/
	/* 练习1.25
		unordered_map<string, vector<Sales_item>> m;
		Sales_item item;
		while (cin >> item)
		{
			m[item.isbn()].push_back(item);
		}
		if (m.empty())
		{
			cerr << "NO data!" << endl;
			return -1;
		}
		for (auto x : m)
		{
			Sales_item sum;
			for (auto y : x.second)
			{
				sum += y;
			}
			cout << "ISBN: " << x.first << "\tsold units:" << sum.get_units_sold()
				<< "\trevenue:" << sum.get_revenue() << "\tavg price:" << sum.avg_price() << endl;
		}
	*/
	return 0;
}