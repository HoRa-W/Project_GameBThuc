#include "Fraction.h"
#include <stdlib.h>

Fraction::Fraction(int level)
{
    if (level == 1 || level == 2 || level == 3)
    {
        tu = 1 + rand() % 10;
        mau = 1 + rand() % 10;
    }
    else if (level == 4 || level == 5)
    {
        tu = 10 + rand() % 91;
        mau = 10 + rand() % 91;;
    }
}

float Fraction::operator+(Fraction a)
{
    Fraction res(0);
    res.tu = tu * a.mau + mau * a.tu;
    res.mau = mau * a.mau;
    return (float)res.tu / res.mau;
}

float Fraction::operator-(Fraction a)
{
    Fraction res(0);
    res.tu = tu * a.mau - mau * a.tu;
    res.mau = mau * a.mau;
    return (float)res.tu / res.mau;
}

float Fraction::operator*(Fraction a)
{
    Fraction res(0);
    res.tu = tu * a.tu;
    res.mau = mau * a.mau;
    return (float)res.tu / res.mau;
}

ostream& operator<<(ostream& out, Fraction ps)
{
    // TODO: insert return statement here
    out << ps.tu << "/" << ps.mau;
    return out;
}
