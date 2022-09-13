#include <iostream>

struct answer {
	int number[3][1];
};



void changing(answer& r) {

	r.number[2][0]++;

	if (r.number[2][0] == 10) {
		r.number[1][0]++;
		r.number[2][0] = 0;
	}
	if (r.number[1][0] == 10) {
		r.number[0][0]++;
		r.number[1][0] = 0;
	}
}

int main() {
	int c = 0;
	answer p;
	p.number[0][0] = { 0 };
	p.number[1][0] = { 0 };
	p.number[2][0] = { -1 };
	do {
		changing(p);
		std::cout << p.number[0][0] << p.number[1][0] << p.number[2][0] << std::endl;
		c++;
	} while (c != 1000);
	return 0;
}