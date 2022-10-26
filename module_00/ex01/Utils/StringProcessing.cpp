#include "../phone_book_project.h"

std::string toLower(std::string source) {
	for (int i = 0; source[i]; ++i) {
		source[i] = std::tolower(source[i]);
	}
	return source;
}

std::string trimStr(std::string source) {
	source.erase(0, source.find_first_not_of(WHITESPACE));
	source.erase(source.find_last_not_of(WHITESPACE) + 1);
	return source;
}

std::string process_string(std::string str) {
	return (toLower(trimStr(str)));
}
