#include <iostream>
#include <ctype.h>

void strcount(const std::string &);

int main(void)
{
    using namespace std;
    string input;
    char next;

    cout << "Enter a line: \n";
    getline(cin, input);
    while (input.size())
    {
        strcount(input);
        cout << "Enter net line (empty line to quit): \n";
        getline(cin, input);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const std::string & str)
{
    using namespace std;
    static int total = 0;
    int count = 0;
    int index = 0;
    int temp = str.size();

    cout << "\"" << str << "\" contains ";
    for (int i = 0; i < temp; i++)
        if (isalpha(str[i]))
            count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}