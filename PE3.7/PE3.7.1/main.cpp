#include <iostream>

using namespace std;

int main(void)
{
	int height;
	const double CF = 1.0 / 12.0; // ע�⣬����������������C++��׼�Ὣ����������������ضϣ����·����㡣������������С����

	cout << "�����������ߣ���λ��Ӣ�磩��";
	cin >> height;
	cout << "�������� " << double(height) * CF << " Ӣ��\n";

	return 0;
}