#include <iostream>

using namespace std;

int main(void)
{
	enum spectrum {red, bule, orange};
	spectrum band;
	int i;

	band = red;
	i = bule;

	cout << "band = " << band << endl;
	cout << "i = " << i << endl;

	return 0;
}