#include "serialisation.hpp"

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data data = {"cdell", 12345};
	uintptr_t uintptr;
	Data* dataPtr;

	std::cout  << std::endl << "Before SERIALISATION:" << std::endl
		<< "Data address:         " << &data << std::endl
		<< "username: " << data.username << std::endl
		<< "password: " << data.password << std::endl;
	
	uintptr = serialize(&data);
	std::cout << std::endl << "uintptr: " << uintptr << std::endl;

	dataPtr = deserialize(uintptr);
	std::cout << std::endl << "After SERIALISATION:" << std::endl
		<< "Data pointer address: " << dataPtr << std::endl
		<< "username: " << dataPtr->username << std::endl
		<< "password: " << dataPtr->password << std::endl << std::endl;
	return 0;
}