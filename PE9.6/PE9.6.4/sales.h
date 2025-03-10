#ifndef __SALES_H__
#define __SALES_H__

namespace SALES
{
    const int QUARTERS {4};
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
void setSales(Sales &, const double *, int);
void setSales(Sales &);
void showSales(const Sales &);
};

#endif