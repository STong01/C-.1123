//#include <iostream>
//using namespace std;
//
//int day2(int year)//判断是否为闰年
//{
//	int m2;
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		m2 = 29;
//	}
//	else
//	{
//		m2 = 28;
//	}
//	return m2;
//}
//
//int day1(int year, int month)//计算每个月的天数
//{
//	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//	{
//		return 31;
//	}
//	else if(month == 2)
//	{
//		return day2(year);
//	}
//	else
//	{
//		return 30;
//	}
//}
//
//int main()
//{
//	int year, month, day;
//	while (cin >> year >> month >> day)
//	{
//
//		int count = 0;
//		for (int i = 1; i < month; i++)
//		{
//			count += day1(year, i);
//		}
//
//		count = count + day;
//		cout << count << endl;
//	}
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cout << n << endl;
	system("pause");
	return 0;
}
