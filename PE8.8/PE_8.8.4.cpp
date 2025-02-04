#include <iostream>
using namespace std;
#include <cstring>
struct stringy {
	char* str;
	int ct;
};

void set(stringy&, const char*);
void show(const char*, int times = 1);
void show(stringy&, int times = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done");
	delete[] beany.str;
	return 0;
}

void set(stringy& beany, const char* testing)
{
	char* temp = new char[strlen(testing) + 1];
	strcpy(temp, testing);
	beany.str = temp;
	beany.ct = strlen(testing);
}
void show(const char* testing, int times)
{
	for (int i = 0; i < times; i++)
	{
		cout << testing << endl;
	}
}
void show(stringy& beany, int times)
{
	for (int i = 0; i < times; i++)
	{
		cout << beany.str << endl;
	}
}