#include <iostream>

using namespace std;

int main(void)
{
	struct CandyBar
	{
		string brand;
		double weight;
		int calorie_content;
	};

	CandyBar snack;
	snack = {
		"Mocha Munch",
		2.3,
		350
	};

	cout << "Ʒ����: " << (&snack)->brand << endl;
	cout << "����: " << (&snack)->weight << endl;
	cout << "��·�ﺬ��: " << (&snack)->calorie_content << endl;

	return 0;
}