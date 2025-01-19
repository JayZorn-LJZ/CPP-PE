#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string first_name;
	string last_name;
	char deserve_letter;
	int age;

	cout << "What is your first name? ";
	getline(cin, first_name);
	cout << "What is your last name? ";
	getline(cin, last_name);
	cout << "What letter gtade do you deserve? ";
	cin >> deserve_letter;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << last_name << ", " << first_name << endl;
	cout << "Grade: " << deserve_letter << endl;
	cout << "Age: " << age << endl;

	return 0;
}