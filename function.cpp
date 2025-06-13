#include <iostream>
#include "function.h"

using namespace std;

void KiemtraBai(int num_Ques, int level, int& point)
{
	cout << "Bieu thuc muc de\n";
	vector<Bieuthuc> myBT;
	for (int i = 0; i < num_Ques; i++) {
		myBT.push_back(Bieuthuc(level));
	}
	//Kiem tra
	cout << "\nCac cau hoi la nhu sau \n";
	int dapan = 0;
	for (int i = 0; i < num_Ques; i++) {
		cout << myBT[i]<<" = ";
		cin >> dapan;
		if (myBT[i].kiemtra(dapan))
			++point;
		else
			cout << "Sai roi" << endl;
		//Tinh diem neu tra loi dung thi +1 sai thi thoi
		cout << "So diem hien tai: " << point << endl;;
	}
	cout << "Tong cong so diem: " << point << "/" << num_Ques << " voi muc do kho la " << level << endl;

}

void KiemtraPT(int num_Ques, int level, int& point)
{
	cout << "Bieu thuc muc kho\n";
	vector<BieuthucPT> myBT_PT;
	for (int i = 0; i < num_Ques; i++) {
		myBT_PT.push_back(BieuthucPT(level));
	}
	//Kiem tra
	cout << "\nCac cau hoi la nhu sau \n";
	int dapan = 0;
	for (int i = 0; i < num_Ques; i++) {
		cout << myBT_PT[i];
		cin >> dapan;
		if (myBT_PT[i].kiemtra(dapan))
			++point;
		else
			cout << "Sai roi" << endl;
		//Tinh diem neu tra loi dung thi +1 sai thi thoi
		cout << "So diem hien tai: " << point << endl;;
	}
	cout << "Tong cong so diem: " << point << "/" << num_Ques * 2 << " voi muc do kho la " << level << endl;
}

void KiemtraPS(int num_Ques, int level, int& point)
{
	cout << "Bieu thuc muc phan so\n";
	vector<BieuthucPS> myBT_PS;
	;
	for (int i = 0; i < num_Ques; i++) {
		myBT_PS.push_back(BieuthucPS(level));
	}
	//Kiem tra
	cout << "\nCac cau hoi la nhu sau \n";
	float dapan = 0;
	for (int i = 0; i < num_Ques; i++) {
		cout << myBT_PS[i];
		cin >> dapan;
		if (myBT_PS[i].kiemtra(dapan))
			++point;
		else
			cout << "Sai roi" << endl;
		//Tinh diem neu tra loi dung thi +1 sai thi thoi
		cout << "So diem hien tai: " << point << endl;;
	}
	cout << "Tong cong so diem: " << point << "/" << num_Ques * 3 << " voi muc do kho la " << level << endl;
}
