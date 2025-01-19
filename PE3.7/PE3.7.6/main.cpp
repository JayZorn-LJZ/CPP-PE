#include <iostream>

using namespace std;

int main(void)
{
	double youliang; // 油量
	double lucheng; // 路程

	cout << "请输入路程（公里）：";
	cin >> lucheng;
	cout << "请输入油量（升）：";
	cin >> youliang;
	cout << "每一百公里的耗油量为："
		<< youliang / lucheng * 100;

	return 0;
}