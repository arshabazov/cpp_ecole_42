//
// Created by Cristie Dell on 9/16/22.
//

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* shmanimal = new Animal();
	std::cout << "\n|--------------------------------------|\n" << std::endl;
	const Animal* dog = new Dog();
	std::cout << "\n|--------------------------------------|\n" << std::endl;
	const Animal* cat = new Cat();

	std::cout << "\n|--------------------------------------|\n" << std::endl;

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << shmanimal->getType() << std::endl;

	std::cout << "\n|--------------------------------------|\n" << std::endl;

	cat->makeSound();
	dog->makeSound();
	shmanimal->makeSound();

	// const WrongAnimal* shmanimal = new WrongAnimal();
	// std::cout << "\n|--------------------------------------|\n" << std::endl;
	// const WrongAnimal* cat = new WrongCat();

	// std::cout << "\n|--------------------------------------|\n" << std::endl;

	// std::cout << cat->getType() << std::endl;
	// std::cout << shmanimal->getType() << std::endl;

	// std::cout << "\n|--------------------------------------|\n" << std::endl;
	
	// cat->makeSound();
	// shmanimal->makeSound();

	delete shmanimal;
	delete dog;
	delete cat;

	return 0;
}