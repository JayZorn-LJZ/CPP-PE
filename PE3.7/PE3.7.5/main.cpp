#include <iostream>

using namespace std;

int main(void)
{
	long long total; // 全球总人口
	long long single_country; // 单独国家的人口

	cout << "Enter the world's population: ";
	cin >> total;
	cout << "Enter the population of the China: ";
	cin >> single_country;
	cout << "The population of the China is " <<
		(double)single_country / double(total) * 100.0 << "% of the world population.";

	return 0;
}