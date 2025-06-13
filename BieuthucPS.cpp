#include "BieuthucPS.h"

BieuthucPS::BieuthucPS(int level) : Bieuthuc(level), a(level), b(level)
{}

bool BieuthucPS::kiemtra(float traloi)
{
    return abs(giatri() - traloi) <= 0.0001;
}

float BieuthucPS::giatri()
{
    switch (pheptoan)
    {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    default: return 0;
    }
}

ostream& operator<<(ostream& out, BieuthucPS bt)
{
    // TODO: insert return statement here
    out << bt.a << bt.pheptoan << bt.b <<"= ";
    return out;
}
