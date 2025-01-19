#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	struct CandyBar
	{
		string brand;
		double weight;
		int calorie_content;
	};

	CandyBar* array = new CandyBar[3];
	for (int i = 0; i < 3; i++)
	{
		array[i].brand = "Mocha Munch";
		array[i].weight = 3.4 + i;
		array[i].calorie_content = 350 + 1;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << array[i].brand << endl;
		cout << array[i].weight << endl;
		cout << array[i].calorie_content << endl;
	}

	return 0;
}