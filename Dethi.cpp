#include "Dethi.h"

Dethi::Dethi(int n1, int n2, int n3, int level)
{
    //sinh danh sach gom n1 bieu thuc chi gom phep cong
    for (int i = 1; i <= n1; i++) {
        ds.push_back(BieuthucCong(level));
    }

    //n2 bieu thuc chi gom phep tru
    for (int i = 1; i <= n2; i++) {
        ds.push_back(BieuthucTru(level));
    }

    //n3 bieu thuc chi gom phep nhan
    for (int i = 1; i <= n3; i++) {
        ds.push_back(BieuthucNhan(level));
    }
}

void Dethi::xuat(ostream& output)
{
    for (int i = 0; i < ds.size(); i++) {
        output << ds[i] << "?\n";
    }
}

int Dethi::danhgia(istream& input)
{
    int point = 0;
    float cauTraloi = 0;
    for (int i = 0; i < ds.size(); ++i) {
        input >> cauTraloi;
        if (ds[i].kiemtra(cauTraloi)) {
            ++point;
        }
    }
    return point;
}
