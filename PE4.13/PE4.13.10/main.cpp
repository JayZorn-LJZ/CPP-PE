#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> array(3);

	cout << "请输入成绩(1/3)：";
	for (int i = 0; i < 3; i++)
	{
		cin >> array[i];
		if (i == 2)
			break;
		cout << "请输入成绩(" << i + 2 << "/3)：";
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "你输入的成绩：" << array[i] << endl;
	}

	return 0;
}