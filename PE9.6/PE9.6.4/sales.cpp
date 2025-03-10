#include <iostream>
#include "sales.h"

static double minimum(const double * ar, int n)
{
    double temp {*ar};
    
    if (!n)
        return 0;
    else if (!(n - 1))
        return *ar;
    for (int i = 1; i < n; i++)
        temp = temp < ar[i] ? temp : ar[i];
    
    return temp;
}
static double maximum(const double * ar, int n)
{
    double temp {*ar};
    
    if (!n)
        return 0;
    else if (!(n - 1))
        return *ar;
    for (int i = 1; i < n; i++)
        temp = temp > ar[i] ? temp : ar[i];
    
    return temp;
}
static double average(const double * ar, int n)
{
    double total {};

    if (!n)
        return 0;
    else if (!(n - 1))
        return *ar;
    for (int i = 0; i < SALES::QUARTERS; i++)
        total += ar[i];

    return total / SALES::QUARTERS;
}

static double get_sales()
{
    double temp {};

    std::cin >> temp;
    // while (std::cin.get() != '\n')
        // ;
    
    return temp;
}

void SALES::setSales(SALES::Sales & s, const double * ar, int n)
{
    double min = minimum(ar, n);

    s.sales[0] = min;
    s.average = average(ar, SALES::QUARTERS);
    s.max = maximum(ar, SALES::QUARTERS);
}

void SALES::setSales(SALES::Sales & s)
{

    std::cout << "请输入4个季度的销售额，以空格分开(输入完请回车)：";
    for (int i = 0; i < SALES::QUARTERS; i++)
        s.sales[i] = get_sales();
    s.average = average(s.sales, SALES::QUARTERS);
    s.max = maximum(s.sales, SALES::QUARTERS);
    s.min = minimum(s.sales, SALES::QUARTERS);
}

void SALES::showSales(const SALES::Sales & s)
{
    std::cout << "四个季度的销售额：" << std::endl;
    for (int i = 0; i < SALES::QUARTERS; i++)
        fprintf(stdout, "%d: %.f\n", i+1, s.sales[i]);
    std::cout << "最大销售额：" << s.max << std::endl << "最小销售额：" << s.min << std::endl;
}