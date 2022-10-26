#include "../phone_book_project.h"

int isValidNumber(std::string &number) {
	for (int i = 0; number[i]; ++i) {
		if (!std::isdigit(number[i]))
			return 0;
	}
	return (1);
}

int setContactField(Contact &contact, std::string key, std::string value)
{
	value = trimStr(value);
	if (key == "first name")
		contact.setFirstName(value);
	else if (key == "last name")
		contact.setLastName(value);
	else if (key == "nickname")
		contact.setNickname(value);
	else if (key == "valid phone number") {
		if (!isValidNumber(value))
			return 0;
		contact.setPhoneNumber(value);
	}
	else if (key == "darkest secret")
		contact.setSecret(value);
	else {
		std::cout << "key was not identified\n";
		return 0;
	}
	return 1;
}

int processInput(Contact &contact, std::string msg) {
	std::string input;

	while (1) {
		std::cout << "Please enter " << msg << std::endl;
		std::getline(std::cin, input);
		if (input == EXIT)
			return 0;
		else if (std::cin.eof()) {
			printCTRLMsg();
			return 0;
		}
		else if (input.empty()) {
			printContactFieldEmptyMsg();
			continue;
		}
		else {
			if (!setContactField(contact, msg, input))
				continue;
			break;
		}
	}
	return 1;
}

int processAddCmd(PhoneBook &phoneBook) {
	Contact contact;
	if (!processInput(contact, "first name"))
		return 0;
	if (!processInput(contact, "last name"))
		return 0;
	if (!processInput(contact, "nickname"))
		return 0;
	if (!processInput(contact, "valid phone number"))
		return 0;
	if (!processInput(contact, "darkest secret"))
		return 0;
	phoneBook.addContact(contact);
	return 1;
}
