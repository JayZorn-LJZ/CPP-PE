#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> array(3);

	cout << "������ɼ�(1/3)��";
	for (int i = 0; i < 3; i++)
	{
		cin >> array[i];
		if (i == 2)
			break;
		cout << "������ɼ�(" << i + 2 << "/3)��";
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "������ĳɼ���" << array[i] << endl;
	}

	return 0;
}