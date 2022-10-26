
#ifndef C_PP_ZOMBIE_HPP
#define C_PP_ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
	std::string name;

public:
	Zombie(std::string name);
	~Zombie(void);
	void announce(void);
	const std::string &getName() const;	
};


#endif //C_PP_ZOMBIE_HPP
