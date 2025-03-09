#include "golf.h"
#include <string>
#include <iostream>

// extern int Len; // 应该是不行的，因为len是const限定了，不过我们#include "golf.h"了

void string_clear(char * name)
{
    for (int i = 0; name[i]; i++)
        name[i] = '\0';
}
void string_copy(const char * name, char * target)
{
    char temp = 0;
    for (int i = 0; (temp = name[i]); i++)
        target[i] = temp;
}
int string_input(char * target, int size)
{
    char temp;
    int index = 0;

    string_clear(target);
    temp = std::cin.get();
    if (temp == '\n' || temp == EOF)
        return 0;
    while (temp != '\n' && index < size)
    {
        target[index] = temp;
        index++;
        temp = std::cin.get();
    }
    while (temp != '\n')
        temp = std::cin.get();

    return 1;
}
void handicap_input(int & handicap)
{
    int temp = 0;
    std::cin >> temp;
    handicap = temp;
    while (std::cin.get() != '\n');
}
void setgolf(golf & g, const char * name, int hc)
{
    g.handicap = hc;
    string_copy(name, g.fullname);
}
int setgolf(golf & g)
{
    int temp;

    std::cout << "Please input your fullname: ";
    temp = string_input(g.fullname, Len);
    if (!temp)
        return temp;
    std::cout << "Please input your handicap: ";
    handicap_input(g.handicap);

    return temp;
}
void handicap(golf & g, int hc)
{
    std::cout << "Please input your handicap: ";
    handicap_input(g.handicap);
}
void showgolf(const golf & g)
{
    std::cout << "Your name is: " << g.fullname << std::endl;
    std::cout << "Your handicap is: " << g.handicap << std::endl;
}
