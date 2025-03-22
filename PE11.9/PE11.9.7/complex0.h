#ifndef COMPLEX0_H__
#define COMPLEX0_H__
#include <iostream>

// 私有部分：
// 1. 实数 double
// 2. 虚数 double
// 公有部分
// 3. 加减乘《《》》等运算符重载

class Complex
{
private:
    double real; // 实数部分
    double imy; // 虚数部分
public:
    Complex(double, double);
    Complex();
    Complex operator+(const Complex &) const;
    Complex operator-(const Complex &) const;
    Complex operator*(const Complex &) const;
    Complex operator~() const;
    friend Complex operator*(double, const Complex &);
    friend std::ostream & operator<<(std::ostream &, const Complex &);
    friend std::istream & operator>>(std::istream &, Complex &);
};

#endif