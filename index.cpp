#include <iostream>
#include <string>
#include <cmath>

bool knight(int x1, int y1, int x2, int y2) {
	return abs(x1 - x2) == 1 && abs(y1 - y2) == 2 || abs(x1 - x2) == 2 && abs(y1 - y2) == 1;
}
