//
// Created by Cristie Dell on 9/16/22.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	Animal *animals[10];
	for (int i = 0; i < 5; ++i) {
		animals[i] = new Cat();
		std::cout << std::endl;
	}
	for (int i = 5; i < 10; ++i) {
		animals[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = 0; i < 10; ++i) {
		animals[i]->makeSound();
	}

	// ((Cat *)animals[0])->printIdeas();
	// ((Dog *)animals[5])->printIdeas();
	std::cout << std::endl;
	for (int i = 0; i < 10; ++i) {
		delete animals[i];
		std::cout << std::endl;
	}

	return 0;
}