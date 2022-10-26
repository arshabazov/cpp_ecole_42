#include <string>
#include <iostream>
#include <random>

class Base {
public:
	virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void) {
	Base *ptr;
	srand(time(NULL));
	switch (rand() % 3)
	{
	case 0:
		std::cout << "Class A has been randomly generated" << std::endl;
		ptr = new A();
		break;
	case 1:
		std::cout << "Class B has been randomly generated" << std::endl;
		ptr = new B();
		break;
	case 2:
		std::cout << "Class C has been randomly generated" << std::endl;
		ptr = new C();
		break;
	}
	return ptr;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "class type is A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "class type is B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "class type is C" << std::endl;
	} else {
		std::cout << "Failed to identify class type" << std::endl;
	}
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "class type is A" << std::endl;
		return ;
	} catch (const std::bad_cast& e) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "class type is B" << std::endl;
		return ;
	} catch (const std::bad_cast& e) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "class type is C" << std::endl;
		return ;
	} catch (const std::bad_cast& e) {
		std::cout << "Unknown type" << std::endl;
	}
}

int main() {
	Base *base = generate();
	identify(*base);
	identify(base);
	identify(nullptr);
	return 0;
}