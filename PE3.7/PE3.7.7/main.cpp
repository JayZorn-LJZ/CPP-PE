#include <iostream>

using namespace std;

int main(void)
{
	double efc; // ŷʽ������
	double afc; // ��ʽ������

	cout << "������ŷʽ����������/�����";
	cin >> efc;

	afc = 1 / efc * 62.14 * 3.785;

	cout << efc
		<< " ��/������ "
		<< afc
		<< " mpg";

	return 0;
}