#include <iostream>
#include <string>
#include <cmath>

bool knight(int x1, int y1, int x2, int y2) {
	return (abs(x1 - x2) + abs(y1 - y2)) == 3 && abs(x1 - x2) != 0 && abs(y1 - y2) != 0;
}
