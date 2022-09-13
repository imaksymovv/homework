#include <iostream>

struct answer {
	int number[3][1000];
};



answer function() {
	int c = 0;
	answer r;
	do {
		r.number[2][c] = c % 10;
		r.number[1][c] = (c % 100) / 10;
		r.number[0][c] = c / 100;
		c++;
	} while (c != 1000);
	return r;
}

int main() {
	auto p = function();
	for (size_t i = 0; i < 1000; i++) {
		std::cout << p.number[0][i] << p.number[1][i] << p.number[2][i] << " " << i << std::endl;
	}
	return 0;
}