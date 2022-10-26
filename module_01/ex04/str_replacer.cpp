#include "str_replcaer.h"

#define INVALID_FILE "Please enter valid file name"
#define INVALID_FIND_STR "Please enter valid string to find"
#define INVALID_REPLACE_STR "Plese enter valid string to replcae with"
#define FILE_TOO_LONG "File name too long"

int isEmpty(const std::string &str) {
	if (str.empty())
		return 0;
	return 1;
}

int isFilenameTooLong(const std::string &filename) {
	if (filename.length() > 255)
		return 0;
	return 1;
}

static void checkParams(const std::string &str, const std::string &msg, int (*fn)(const std::string&)) {
	if (!fn(str)) {
		std::cout << msg << std::endl;
		std::exit(1);
	}
}

static void canOpenFile(const std::fstream &file, const std::string filename) {
	if (!file.is_open()) {
		std::cout << "Failed to open file " << filename << std::endl;
		std::exit(1);
	}
}

void replaceFileStr(const std::string &file, const std::string find_str, const std::string replace_str)
{
	checkParams(file, INVALID_FILE, isEmpty);
	checkParams(find_str, INVALID_FIND_STR, isEmpty);
	checkParams(replace_str, INVALID_REPLACE_STR, isEmpty);
	checkParams(file + ".replcae", FILE_TOO_LONG, isFilenameTooLong);

	std::fstream in_file(file, std::ios::in);
	canOpenFile(in_file, file);

	std::string out_filename = file + ".replace";
	std::fstream out_file(out_filename, std::ios::out | std::ios::trunc);
	canOpenFile(out_file, file);

	std::string line;
	std::size_t found;
	while (!in_file.eof()) {
		std::getline(in_file, line);
		while (1) {
			found = line.find(find_str);
			if (found != std::string::npos) {
				line.erase(found, find_str.length());
				line.insert(found, replace_str);
			}
			else
				break;
		}
		out_file << line << std::endl;
	}
	in_file.close();
	out_file.close();
}
