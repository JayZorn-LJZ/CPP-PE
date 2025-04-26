#include <iostream>
#include <cstring>
#include "baseDMA.h"

baseDMA::baseDMA(const char * c, const char * l, int r) : ABCDMA(l, r)
{
    int len = strlen(c);

    color = new char[len + 1];
    strncpy(color, c, len);
    color[len] = '\0';
}

baseDMA::baseDMA(const baseDMA & ba) : ABCDMA(ba.ABCDMA_label(), ba.ABCDMA_rating())
{
    int len = strlen(ba.color);

    color = new char[len + 1];
    strncpy(color, ba.color, len);
    color[len] = '\0';
}

baseDMA & baseDMA::operator=(const baseDMA & ba)
{
    int len = strlen(ba.color);

    delete color;
    color = new char[len + 1];
    strncpy(color, ba.color, len);
    color[len] = '\0';

    return *this;
}

void baseDMA::ViewAcct() const
{
    ABCDMA::ViewAcct();
    std::cout << "baseDMA类: \n" 
    << "color: " << color << std::endl
    << std::endl;
}