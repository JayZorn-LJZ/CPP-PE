#include <cstring>
#include <iostream>
#include "cow.h"

Cow::Cow()
{
    strcpy(name, "None");
    hobby = new char[20];
    hobby = nullptr;
    weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    strcpy(name, nm);
    hobby = new char[20];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c)
{
    strcpy(name, c.name);
    hobby = new char[20];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
    if (this == &c)
        return *this;
    if (c.name[0])
        *name = '\0';
    else
        strcpy(name, c.name);
    delete [] hobby;
    hobby = new char [20];
    if (*c.hobby)
    {
        strcpy(hobby, c.hobby);
    }
    weight = c.weight;
}

void Cow::ShowCow() const
{
    std::cout << "name: " << name << std::endl;
    std::cout << "hobby: " << hobby << std::endl;
    std::cout << "weight: " << weight << std::endl;
}