#include <iostream>

using namespace std;

int main(void)
{
	int temp;
	int total = 0;

	cout << "���������֣�";
	cin >> temp;
	while (temp != 0)
	{
		total += temp;
		cout << "Ŀǰ������ܺ�Ϊ:" << total << endl;
		cout << "���������֣�";
		cin >> temp;
	}

	return 0;
}