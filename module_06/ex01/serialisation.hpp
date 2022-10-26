#include <string>
#include <iostream>

struct Data {
	std::string username;
	unsigned int password;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);