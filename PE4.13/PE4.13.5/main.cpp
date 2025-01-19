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

	cout << "品牌名: " << (&snack)->brand << endl;
	cout << "重量: " << (&snack)->weight << endl;
	cout << "卡路里含量: " << (&snack)->calorie_content << endl;

	return 0;
}