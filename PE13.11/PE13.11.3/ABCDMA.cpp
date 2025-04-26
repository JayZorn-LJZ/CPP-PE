#include <iostream>
#include <cstring>
#include "ABCDMA.h"

ABCDMA::ABCDMA()
{
    label = new char[1];
    rating = 0;
}

ABCDMA::ABCDMA(const ABCDMA & aa)
{
    int len = strlen(aa.label);

    label = new char[len + 1];
    strncpy(label, aa.label, len);
    label[len] = '\0';
    rating = aa.rating;
}

ABCDMA::ABCDMA(const char * l, int r)
{
    int len = strlen(l);

    label = new char[len + 1];
    strncpy(label, l, len);
    label[len] = '\0';
    rating = r;
}

ABCDMA::~ABCDMA()
{
    delete label;
}

ABCDMA & ABCDMA::operator=(const ABCDMA & aa)
{
    int len = strlen(aa.label);

    delete label;
    label = new char[len + 1];
    strncpy(label, aa.label, len);
    label[len] = '\0';

    rating = aa.rating;

    return *this;
}

void ABCDMA::ViewAcct() const
{
    std::cout << "ABC类: \n" 
    << "label: " << label << std::endl
    << "rating: " << rating << std::endl;
}

const char * ABCDMA::ABCDMA_label() const
{
    return label;
}

int ABCDMA::ABCDMA_rating() const
{
    return rating;
}