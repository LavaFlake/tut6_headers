#include <iostream>
#include "prototypes.h"

int main() {
	int x {getDigits()};
	int y {getDigits()};

	std::cout << "I added " << x << " and " << y << " together and got: " << add(x, y) << std::endl;
}
