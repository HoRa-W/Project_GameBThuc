#include <iostream>
#include "Bieuthuc.h"
#include "BieuthucPS.h"
#include "BieuthucPT.h"
#include "function.h"
#include <vector>

using namespace std;

int main() {
	int point = 0;

	//Can lap 1 ham kiem tra sinh ra bao nhieu bieu thuc => new la 1 bieu thuc moi => mang
	int num_Ques = 0;
	cout << "Ban muon bao nhieu cau hoi: ";
	cin >> num_Ques;

	//Cap do nhu the nao
	int level = 0;
	cout << "Ban muon cap do nhu the nao (level > 0): ";
	cin >> level;

	//Vao kiem tra
	KiemtraBai(num_Ques, level, point);
	KiemtraPT(num_Ques, level, point);
	KiemtraPS(num_Ques, level, point);

	cout << "\nTong cong so diem qua 3 cap do: " << point << "/" << num_Ques * 3 << " voi muc do kho la " << level << endl;

	return 0;
}


