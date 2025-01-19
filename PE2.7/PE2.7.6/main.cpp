#include <iostream>

using namespace std;

double compute_light_years(double);

int main(void)
{
	double light_years;

	cout << "Enter the number of light years:";
	cin >> light_years;
	cout << light_years << " light years = " << compute_light_years(light_years) << " astronmical units.";

	return 0;
}
double compute_light_years(double light_years)
{
	return light_years * 63240;
}