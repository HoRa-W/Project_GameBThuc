#pragma once
#include "Bieuthuc.h"
#include <iostream>
using namespace std;
class BieuthucPT : public Bieuthuc
{
private:
     //..Bổ sung thêm dữ liệu để lưu trữ được (a#b) # (c#d)
    Bieuthuc m;
    Bieuthuc n;
    int level;
    char dauhaibt;
public:
    BieuthucPT(int level = 0); //overide để sinh ngẫu nhiên được dạng biểu thức mới, quy luật sinh như sinh lớp Bieuthuc
    friend ostream& operator<<(ostream& out, BieuthucPT bt); //overide để xuất dạng biểu thức mới
    bool kiemtra(float traloi); //overide...
    float giatri(); //overide...
};
