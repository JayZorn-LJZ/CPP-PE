#include <iostream>

using namespace std;

int ctof(int);

int main(void)
{
	int degree;

	cout << "Please enter a Celsius value :";
	cin >> degree;
	cout << degree << " degrees Celsius is " << ctof(degree) << " degrees Fahrenheit";

	return 0;
}
int ctof(int c)
{
	return 1.8 * c + 32.0;
}