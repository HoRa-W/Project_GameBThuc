#pragma once
#include <iostream>
#include "Bieuthuc.h"

class BieuthucTru : public Bieuthuc {
	int level;
public:
	BieuthucTru(int);
	float giatri();
};