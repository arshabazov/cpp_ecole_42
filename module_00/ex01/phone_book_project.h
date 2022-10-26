#ifndef PHONEBOOKPROJECT_H
#define PHONEBOOKPROJECT_H
#include "Model/Contact.hpp"
#include "Model/PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

#define ADD "add"
#define SEARCH "search"
#define EXIT "exit"
#define WHITESPACE " \n\r\t\f\v"

// Controller
int processAddCmd(PhoneBook &phoneBook);
int processSearchCmd(PhoneBook &phoneBook);

// Print custom message
void printCTRLMsg();
void printCmdMsg();
void printContactFieldEmptyMsg();
void printFailedToAddContactMsg();
void printContactAddedMsg();
void printGoodbyeMsg();
void printInvalidIndexMsg();

// Utils
std::string process_string(std::string str);
std::string trimStr(std::string source);

#endif //PHONEBOOKPROJECT_H
