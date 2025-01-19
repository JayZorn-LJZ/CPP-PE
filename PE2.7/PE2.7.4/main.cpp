#include <iostream>

using namespace std;

int main(void)
{
	int age;

	cout << "enter your age:";
	cin >> age;
	cout << "your age in months is "
		<< age * 12 << "." << endl;

	return 0;
}