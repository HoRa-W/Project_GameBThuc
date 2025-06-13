#include "BieuthucPT.h"
#include <stdlib.h>

BieuthucPT::BieuthucPT(int level) : Bieuthuc(level), m(level), n(level), dauhaibt(pheptoan)
{
    this->level = level;
    if (level == 1) {
        dauhaibt = pheptoan;
    }
    else if (level == 2) {
        dauhaibt = (rand() % 2 == 0) ? '+' : '-';
    }
    else if (level == 3) {
        int k = rand() % 3;
        dauhaibt = (k == 0) ? '+' : (k == 1) ? '-' : '*';
    }
    else if (level == 4) {
        dauhaibt = (rand() % 2 == 0) ? '+' : '-';
    }
    else if (level == 5) {
        int k = rand() % 3;
        dauhaibt = (k == 0) ? '+' : (k == 1) ? '-' : '*';
    }
}

bool BieuthucPT::kiemtra(float traloi)
{
    return abs(giatri() - traloi) <= 0.00000001;
}

float BieuthucPT::giatri()
{
    switch (dauhaibt)
    {
    case'+': return m.giatri() + n.giatri();
    case'-': return m.giatri() - n.giatri();
    case'*': return m.giatri() * n.giatri();
    default: return 0;
    }
}

ostream& operator<<(ostream& out, BieuthucPT bt)
{
    // TODO: insert return statement 
    //out << bt.a << " " << bt.pheptoan << " " << bt.b << "  = ";
    //return out;
    out << "(" << bt.m << ") " << bt.dauhaibt << "(" << bt.n << ") = ";
    return out;
}
