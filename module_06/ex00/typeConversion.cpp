#include "typeConversion.h"

void printChar(const std::string& str) {
	std::cout << "char: ";
	if (str.length() == 1) {
		char c = str[0];
		if (isdigit(c)) {
			int n = std::stoi(str);
			c = static_cast<char>(n);
		}
		if (isprint(c)) {
			std::cout << "'" << c << "'" << std::endl;
		} else {
			std::cout << "non displayable" << std::endl;
		}
	} else {
		try {
			int n = std::stoi(str);
			if (!isascii(n)) {
				std::cout << "impossible" << std::endl;
			} else if (!isprint(n)) {
				std::cout << "non displayable" << std::endl;
			} else {
				char c = static_cast<char>(n);
				std::cout << "'" << c << "'" << std::endl;
			}
		} catch (const std::invalid_argument& e) {
			std::cout << "impossible" << std::endl;
		} catch (const std::out_of_range& e) {
			std::cout << "impossible" << std::endl;
		}
	}
}

void printInt(const std::string& str) {
	std::cout << "int: ";
	int n = 0;
	if (str.length() == 1) {
		char c = str[0];
		n = static_cast<int>(c);
		std::cout << n << std::endl;
	} else {
		try {
			n = static_cast<int>(stoi(str));
			std::cout << n << std::endl;
		} catch (const std::invalid_argument& e) {
			std::cout << "impossible" << std::endl;
		} catch (const std::out_of_range& e) {
			std::cout << "impossible" << std::endl;
		}
	}
}

void printFloat(const std::string& str) {
	std::cout << "float: ";
	try {
		float f = static_cast<float>(std::stof(str));
		int n = f;
		if (f - (float)n == 0) {
			std::cout.precision(1);
		}
		std::cout << std::fixed;
		std::cout << f << "f" << std::endl;
	} catch (const std::invalid_argument& e) {
		std::cout << "impossible" << std::endl;
	} catch (const std::out_of_range& e) {
		std::cout << std::numeric_limits<float>::infinity() << "f" << std::endl;
	}
}

void printDouble(const std::string& str) {
	std::cout << "double: ";
	try {
		double d = static_cast<double>(std::stod(str));
		int n = d;
		if (d - (double)n == 0) {
			std::cout.precision(1);
		}
		std::cout << std::fixed;
		std::cout << d << std::endl;
	} catch (const std::invalid_argument& e) {
		std::cout << "impossible" << std::endl;
	} catch (const std::out_of_range& e) {
		std::cout << std::numeric_limits<double>::infinity() << std::endl;
	}
}

void convertType(const std::string& str) {
	printChar(str);
	printInt(str);
	printFloat(str);
	printDouble(str);
}
