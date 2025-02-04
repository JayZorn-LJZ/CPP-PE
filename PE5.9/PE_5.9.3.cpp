#include <iostream>

using namespace std;

int main(void)
{
	int temp;
	int total = 0;

	cout << "请输入数字：";
	cin >> temp;
	while (temp != 0)
	{
		total += temp;
		cout << "目前输入的总和为:" << total << endl;
		cout << "请输入数字：";
		cin >> temp;
	}

	return 0;
}