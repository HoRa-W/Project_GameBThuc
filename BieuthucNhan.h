#pragma once
#include <iostream>
#include "Bieuthuc.h"

class BieuthucNhan : public Bieuthuc {
	int level;
public:
	BieuthucNhan(int);
	float giatri();
};