#include <iostream>

int Test();

int main() {
	int x{ 6 };
	int y{ x - 2 };

	std::cout << y << '\n';

	int z{};
	z = Test();
	std::cout << z - x << '\n';

	return 0;
}

