// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = LBS;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
    mode = STN;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
    mode = LBS;
}

Stonewt::~Stonewt()         // destructor
{
}

void Stonewt::LBS_mode()
{
    mode = LBS;
}

void Stonewt::STN_mode()
{
    mode = STN;
}

// show weight in stones
// void Stonewt::show_stn() const
// {
//     cout << stone << " stone, " << pds_left << " pounds\n";
// }

// show weight in pounds
// void Stonewt::show_lbs() const
// {
//     cout << pounds << " pounds\n";
// }

std::ostream & operator<<(std::ostream & _cout, const Stonewt & s)
{
    if (s.mode == s.LBS)
        _cout << s.pounds << " pounds\n";
    else if (s.mode == s.STN)
        _cout << s.stone << " stone, " << s.pds_left << " pounds\n";
    return _cout;
}

Stonewt::operator double() const
{
    return pounds;
}

Stonewt Stonewt::operator+(double n) const
{
    Stonewt s = n + pounds;
    return s;
}

Stonewt Stonewt::operator-(double n) const
{
    Stonewt s = pounds - n;
    return s;
}

Stonewt Stonewt::operator-() const
{
    return -pounds;
}

Stonewt Stonewt::operator*(double n) const
{
    Stonewt s = pounds * n;
    return s;
}

Stonewt Stonewt::operator+=(double n)
{
    pounds += n;
    return pounds;
}