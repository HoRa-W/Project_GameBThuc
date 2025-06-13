#include "Bieuthuc.h"
#include <stdlib.h>

Bieuthuc::Bieuthuc(int level)
{
    if (level == 1) {
        a = 1 + rand() % 10;
        b = 1 + rand() % 10;
        pheptoan = '+';
    }
    else if (level == 2) {
        a = 1 + rand() % 10;
        b = 1 + rand() % 10;
        pheptoan = (rand() % 2 == 0) ? '+' : '-';
    }
    else if (level == 3) {
        a = 1 + rand() % 10;
        b = 1 + rand() % 10;
        int r = rand() % 3;
        pheptoan = (r == 0) ? '+' : (r == 1) ? '-' : '*';
    }
    else if (level == 4) {
        a = 10 + rand() % 91;
        b = 10 + rand() % 91;
        pheptoan = (rand() % 2 == 0) ? '+' : '-';
    }
    else if (level == 5) {
        a = 10 + rand() % 91;
        b = 10 + rand() % 91;
        int r = rand() % 3;
        pheptoan = (r == 0) ? '+' : (r == 1) ? '-' : '*';
    }
}

ostream& operator<<(ostream& out, Bieuthuc bt)
{
    // TODO: insert return statement here
    out << bt.a << " " << bt.pheptoan << " " << bt.b;
    return out;
}

bool Bieuthuc::kiemtra(float traloi)
{
    return abs(giatri() - traloi) <= 0.00000001;
}

float Bieuthuc::giatri()
{
    switch(pheptoan)
    {
        case'+': return a + b;
        case'-': return a - b;
        case'*': return a * b;
        default: return 0;
    }
}
