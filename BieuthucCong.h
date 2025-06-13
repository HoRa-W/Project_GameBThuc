#pragma once
#include <iostream>
#include "Bieuthuc.h"

class BieuthucCong : public Bieuthuc {
	int level;
public:
	BieuthucCong(int);
	float giatri();
};