#include <iostream>

using namespace std;

int main(void)
{
	double efc; // 欧式耗油量
	double afc; // 美式耗油量

	cout << "请输入欧式耗油量（升/公里）：";
	cin >> efc;

	afc = 1 / efc * 62.14 * 3.785;

	cout << efc
		<< " 升/公里是 "
		<< afc
		<< " mpg";

	return 0;
}