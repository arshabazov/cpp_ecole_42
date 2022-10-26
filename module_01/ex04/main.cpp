#include "str_replcaer.h"

int main(int argc, char *argv[]) {
	(void) argv;

	if (argc < 4 || argc > 4) {
		std::cout << "Wrong  number of arguments" << std::endl;
		exit(1);
	}
	replaceFileStr(argv[1], argv[2], argv[3]);
	return 0;
}