#include <iostream>

using namespace std;

int main(void)
{
	int num1;
	int num2;
	int temp = 0;

	cout << "����������������";
	cin >> num1;
	cin >> num2;
	for (int i = num1; i <= num2; i++)
		temp += i;
	cout << num1 << " �� " << num2 << "֮�����е������ܺ�Ϊ " << temp;

	return 0;
}