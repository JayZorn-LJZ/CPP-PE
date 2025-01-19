#include <iostream>
#include <string>
#include <cstring>

#define SIZE 20
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main(void)
{
	char first_name[SIZE];
	char last_name[SIZE];
	char name[SIZE * 2];
	char* p;

	cout << "Enter your first name: ";
	cin.get(first_name, 20).get();
	cout << "Enter your last name: ";
	cin.get(last_name, 20).get();
	strcpy_s(name, first_name);
	p = name + strlen(first_name);
	strcpy(p, ", ");
	p = name + strlen(name);
	strcpy(p, last_name);
	cout << name << endl;

	return 0;
}