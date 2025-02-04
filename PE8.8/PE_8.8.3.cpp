#include <iostream>
#include <string>

using namespace std;

void func(string&);

int main(void)
{
	string s_input;
	string tips = "Enter a string (q to quit):";

	cout << tips;
	getline(cin, s_input);
	while (s_input.size() != 1 || s_input[0] != 'q')
	{
		func(s_input);
		cout << s_input << endl;
		cout << tips;
		getline(cin, s_input);
	}
}

void func(string& s_input)
{
	for (int i = 0; i < s_input.size(); i++)
	{
		s_input[i] = toupper(s_input[i]);
	}
}