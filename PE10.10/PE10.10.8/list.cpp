#include <iostream>
#include "list.h"

void copy(const int * source, int * target, int size)
{
    for (int i = 0; i < size; i++)
        target[i] = source[i];
}

List::List()
{
    members = 0;
    end = 0;
}
List::List(int m)
{
    if (m <= 0)
    {
        members = 0;
        std::cout << "成员数不能小于等于0" << std::endl;
    }
    else
        members = m;
    end = 0;
    array = new int [members];
}
List::~List()
{
    delete [] array;
}
void List::add(int new_n)
{
    int * temp;

    if (end == members)
    {
        temp = new int [++members];
        copy(array, temp, end);
        temp[end] = new_n;
        delete [] array;
        array = new int [members];
        copy(temp, array, members);
        end++;
        delete [] temp;
    }
    else
        array[end++] = new_n;
}
bool List::isfull() const
{
    if (members == 0)
        return true;
    else if (end == members)
        return true;
    return false;
}
bool List::isempty() const
{
    if (end == 0)
        if (members > 0)
            return true;
        else
            return false;
    return false;
}
void List::operate(void (*func)(int &))
{
    if (! isempty())
        for (int i = 0; i < members; i++)
        {
            func(array[i]);
        }
}
int List::list_members()
{
    return members;
}