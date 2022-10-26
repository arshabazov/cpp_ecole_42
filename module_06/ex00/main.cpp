#include "typeConversion.h"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Wrong number of input arguments" << std::endl;
		return 1;
	}
	convertType(argv[1]);

	return 0;
}