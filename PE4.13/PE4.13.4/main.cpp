#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string first_name;
	string last_name;
	string name;

	cout << "Enter your first name: ";
	getline(cin, first_name);
	name += first_name;
	cout << "Enter your last_name: ";
	getline(cin, last_name);
	name = name + ", " + last_name;
	cout << name;

	return 0;
}