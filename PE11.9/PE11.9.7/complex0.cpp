#include <iostream>
#include "complex0.h"

Complex::Complex(double r, double i)
{
    real = r;
    imy = i;
}

Complex::Complex()
{
    real = imy = 0.0;
}

Complex Complex::operator+(const Complex & c) const
{
    Complex temp{};
    temp.real = real + c.real;
    temp.imy = imy + c.imy;
    return temp;
}

Complex Complex::operator-(const Complex & c) const
{
    Complex temp{};
    temp.real = real - c.real;
    temp.imy = imy - c.imy;
    return temp;
}

Complex Complex::operator~() const
{
    Complex temp{real, -imy};
    return temp;
}

Complex Complex::operator*(const Complex & c) const
{
    Complex temp{};
    temp.real = real * c.real - imy * c.imy;
    temp.imy = real * c.imy + imy * c.real;
    return temp;
}

Complex operator*(double n, const Complex & c)
{
    Complex temp{};
    temp.real = n * c.real;
    temp.imy = n * c.imy;
    return temp;
}

std::ostream & operator<<(std::ostream & o, const Complex & c)
{
    o << "(" << c.real << ", " << c.imy << "i)";
    return o;
}

std::istream & operator>>(std::istream & i, Complex & c)
{
    std::cout << "请输入实数部分：" ;
    if (! (i >> c.real))
        return i;
    while (i.get() != '\n')
        ;
    std::cout << "请输入叙述部分：" ;
    if (! (i >> c.imy))
        return i;
    while (i.get() != '\n')
        ;
    return i;
}