#include <iostream>

using namespace std;

int main(void)
{
	int num1;
	int num2;
	int temp = 0;

	cout << "请输入两个整数：";
	cin >> num1;
	cin >> num2;
	for (int i = num1; i <= num2; i++)
		temp += i;
	cout << num1 << " 和 " << num2 << "之间所有的数的总和为 " << temp;

	return 0;
}