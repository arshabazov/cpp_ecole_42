#include "phone_book_project.h"

void print_contact(const PhoneBook &phoneBook, int index) {
	std::cout
	<< "first name = " << phoneBook.getContact(index).getFirstName() << "\n"
	<< "last name = " << phoneBook.getContact(index).getLastName() << "\n"
	<< "nickname = " << phoneBook.getContact(index).getNickName() << "\n"
	<< "phone number = " << phoneBook.getContact(index).getPhoneNumber() << "\n"
	<< "darkest secret = " << phoneBook.getContact(index).getSecret() << "\n";
}

int main() {
	std::string input;
	PhoneBook phoneBook;

	while (input != EXIT) {
		std::cout << "Please enter any of the following commands: ADD, SEARCH, EXIT\n";
		std::getline(std::cin, input);
		input = process_string(input);
		if (std::cin.eof()) {
			printCTRLMsg();
			break;
		}
		else if (input == ADD) {
			if (!processAddCmd(phoneBook)) {
				printFailedToAddContactMsg();
				break;
			}
			else
				printContactAddedMsg();
		} else if (input == SEARCH) {
			if (!processSearchCmd(phoneBook))
				break;
			std::cin.ignore();
		} else if (input == EXIT)
			break;
		else
			printCmdMsg();
	}
	printGoodbyeMsg();
	return 0;
}

