//
// Created by Cristie Dell on 9/1/22.
//

#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug(void) {
	std::cout	<< "[" << DEBUG << "]" << std::endl
				<< "I love having extra bacon for my "
				"7XL-double-cheese-triple-pickle-special- "
				"ketchup burger. I really do!"
				<< std::endl << std::endl;
}

void Harl::info(void) {
	std::cout	<< "[" << INFO << "]" << std::endl
				<< "I cannot believe adding extra bacon costs more money. "
				"You didn’t put enough bacon in my burger! "
				"If you did, I wouldn’t be asking for more!"
				<< std::endl << std::endl;
}

void Harl::warning(void) {
	std::cout	<< "[" << WARNING << "]" << std::endl
				<< "I think I deserve to have some extra bacon for free. "
				 "I’ve been coming for years whereas you started "
				 "working here since last month."
				<< std::endl << std::endl;
}

void Harl::error(void) {
	std::cout	<< "[" << ERROR << "]" << std::endl
				<< "This is unacceptable! I want to speak to "
				"the manager now."
				<< std::endl << std::endl;
}

void Harl::unkown(void) {
	std::cout	<< "[ Probably complaining about insignificant problems ]"
				<< std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*complains[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::unkown};
	std::string levels[] = {DEBUG, INFO, WARNING, ERROR};
	int index = 0;
	for (; index < 4 && levels[index] != level; index++);
	switch (index)
	{
		case 0: (this->*complains[0])();
		case 1: (this->*complains[1])();
		case 2: (this->*complains[2])();
		case 3: (this->*complains[3])();
		break;
	default:
		(this->*complains[4])();
		break;
	}
}
