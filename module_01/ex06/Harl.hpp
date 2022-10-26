//
// Created by Cristie Dell on 9/1/22.
//

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

#define DEBUG "DEBUG"
#define INFO "INFO"
#define WARNING "WARNING"
#define ERROR "ERROR"

class Harl {
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void unkown(void);

public:
	Harl();
	~Harl();

	void complain(std::string level);
};


#endif //HARL_HPP
