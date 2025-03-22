// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
private:
    enum {LBS, STN};
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
    int mode;
public:
    Stonewt(double lbs);          // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
    void LBS_mode();
    void STN_mode();
    // void show_lbs() const;        // show weight in pounds format
    // void show_stn() const;        // show weight in stone format
    operator double() const;
    Stonewt operator+(double) const;
    Stonewt operator-(double) const;
    Stonewt operator-() const;
    Stonewt operator*(double) const;
    bool operator>(const Stonewt &) const;
    bool operator>=(const Stonewt &) const;
    bool operator<(const Stonewt &) const;
    bool operator<=(const Stonewt &) const;
    bool operator==(const Stonewt &) const;
    friend std::ostream & operator<<(std::ostream &, const Stonewt &);
};
#endif
