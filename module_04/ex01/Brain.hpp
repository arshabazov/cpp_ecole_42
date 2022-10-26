//
// Created by Cristie Dell on 9/16/22.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#define MAX_SIZE 100

class Brain {
private:
	std::string ideas[MAX_SIZE];

public:
	Brain(const std::string& idea);
	Brain(const Brain& copy);
	~Brain();

	const Brain& operator = (const Brain &other);

	// Member functions
	const std::string& getIdea(int index) const;
};


#endif //BRAIN_HPP
