#include "main.h"

class Canculator {
public:
	// overloading - перегрузка
	static int add(int a, int b) {
		return a + b;
	}
	static int add(int a, int b, int c) {
		return a + b + c;
	}
	static double add(double a, double b) {
		return a + b;
	}
};

int main() {
	cout << Canculator::add(5, 6, 5) << endl;

	return 0;
 }