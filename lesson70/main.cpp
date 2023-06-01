#include "main.h"

class A {
public: 
	virtual void test() {
		cout << "AAAAAAAAAAAAAAAA" << endl;
	}
};

class B : public A {
public:
	//overriding - переопределение
	void test() {
		cout << "BBBBBBBBBBBBBBBBB" << endl;
	}
};

int main() {
	/*A aa;

	A* a = new A();
	delete a;*/

	A* a = new A();
	a->test();

	delete a;
	
	a = new B();
	a->test();

	return 0;
 }