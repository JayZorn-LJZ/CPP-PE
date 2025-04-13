// stack.cpp -- Stack member functions
#include "stack.h"
// Stack::Stack()    // create an empty stack
// {
//     top = 0;
// }

Stack::Stack(int n)
{
    if (n <= 0)
    {
        pitems = new Item[1];
        size = 1;
        top = 0;
    }
    else
    {
        pitems = new Item[n];
        size = n;
        top = 0;
    }
}

Stack::Stack(const Stack & st)
{
    // 使用对象初始化
    pitems = new Item[st.size];
    for (int i = 0; i < st.size; i++)
        pitems[i] = st.pitems[i];
    size = st.size;
    top = 0;
}

Stack & Stack::operator=(const Stack st)
{
    delete [] pitems;
    pitems = new Item[st.size];
    for (int i = 0; i < st.size; i++)
        pitems[i] = st.pitems[i];
    size = st.size;
    top = 0;
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item) 
{
    if (top < MAX)
    {
        pitems[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        item = pitems[--top];
        return true;
    }
    else
        return false; 
}
