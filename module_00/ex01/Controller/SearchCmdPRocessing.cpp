#include "../phone_book_project.h"

void displayHeader() {
	std::cout	<< "|-------------------------------------------|\n"
				<< "|     Index|First Name| Last Name|  Nickname|\n"
				<< "|-------------------------------------------|\n";
}

void displayStr(const std::string &str) {
	std::cout << "|";

	if (str.size() > 10) {
		std::string tmp = str.substr(0, 9) + ".";
		std::cout << std::right << std::setw(10) << tmp;
	}
	else
		std::cout << std::right << std::setw(10) << str;
}

void displayRow(const Contact &contact, int index) {
	std::cout << "|";
	std::cout << std::right << std::setw(10) << index + 1;
	displayStr(contact.getFirstName());
	displayStr(contact.getLastName());
	displayStr(contact.getNickName());
	std::cout << "|\n";
	std::cout << "|-------------------------------------------|\n";
}

void displayContactList(PhoneBook &phoneBook) {
	displayHeader();
	for (int i = 0; i < phoneBook.getCurrentCapacity(); i++) {
		const Contact &contact = phoneBook.getContact(i);
		displayRow(contact, i);
	}
	std::cout << std::endl;
}

void displayExtendedContactInfo(const Contact &contact) {
	std::cout	<< "|---------------------------------------------------------------|\n"
				<< "| Contact Information                                           |\n"
				<< "|---------------------------------------------------------------|\n"
				<< "First name: " << contact.getFirstName() << std::endl
				<< "Last name: " << contact.getLastName() << std::endl
				<< "Nickname: " << contact.getNickName() << std::endl
				<< "Phone number: " << contact.getPhoneNumber() << std::endl
				<< "Darkest secret: " << contact.getSecret() << std::endl << std::endl;
}

int processContactRequest(const PhoneBook &phoneBook) {
	int index = 0;
	while (1) {
		std::cout << "Please enter contact index\n";
		std::cin >> index;
		if (std::cin.eof()) {
			printCTRLMsg();
			return 0;
		}
		else if (index == 0)
			continue;
		else if (index < 0 || index > 8) {
			printInvalidIndexMsg();
		}
		else {
			displayExtendedContactInfo(phoneBook.getContact(index - 1));
			break;
		}
//		std::cin.clear();
	}
	return 1;
}

int processSearchCmd(PhoneBook &phoneBook) {
	if (phoneBook.getCurrentCapacity() == 0) {
		std::cout << "Contact list is empty\n";
		return 1;
	}
	displayContactList(phoneBook);
	if (!processContactRequest(phoneBook)) {
		return 0;
	}
	return 1;
}
