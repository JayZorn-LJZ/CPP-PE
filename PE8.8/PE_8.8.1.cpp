#include <iostream>

using namespace std;

int p_string(string&);
void p_string(string&, int);

int main(void)
{
	int times = 0;
	string s = "Hello world";

	for (int i = 0; i < 10; i++)
		times += p_string(s);
	cout << times << endl;
	p_string(s, times);

	return 0;
}

int p_string(string& s1)
{
	cout << s1 << endl;
	return 1;
}
void p_string(string& s1, int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << s1 << endl;
	}
}