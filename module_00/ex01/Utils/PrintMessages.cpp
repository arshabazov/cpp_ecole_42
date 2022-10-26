#include "../phone_book_project.h"

void printCTRLMsg() {
	std::cout	<< "|---------------------------------------------------------------|\n"
				<< "| OOH YOU TRAGIC THING, pressed CTRL-D, didn't you              |\n"
				<< "|---------------------------------------------------------------|\n\n";
}

void printCmdMsg() {
	std::cout	<< "|---------------------------------------------------------------|\n"
				<< "| Listen, you MORON, there only three commands available to you |\n"
				<< "|---------------------------------------------------------------|\n\n";
}

void printContactFieldEmptyMsg() {
	std::cout	<< "|---------------------------------------------------------------|\n"
				<< "| How hard could it be to type in some text, you MORON          |\n"
				<< "|---------------------------------------------------------------|\n\n";
}

void printContactAddedMsg() {
	std::cout	<< "|---------------------------------------------------------------|\n"
				<< "| Contact successfully added                                    |\n"
				<< "|---------------------------------------------------------------|\n\n";
}

void printFailedToAddContactMsg() {
	std::cout	<< "|---------------------------------------------------------------|\n"
				<< "| Failed to add contact                                         |\n"
				<< "| Exiting terminal                                              |\n"
				<< "|---------------------------------------------------------------|\n\n";
}

void printInvalidIndexMsg() {
	std::cout	<< "|---------------------------------------------------------------|\n"
				<< "| OOH YOU TRAGIC THING, not familiar with digits, are we?       |\n"
				<< "| Do me a solid one, and just KILL yourself                     |\n"
				<< "| OR, you could try to type in the correct index                |\n"
				<< "| It's not ROCKET SCIENCE, you know                             |\n"
				<< "|---------------------------------------------------------------|\n\n";
}

void printGoodbyeMsg() {
	std::cout	<< "|---------------------------------------------------------------|\n"
				<< "| Roses are red                                                 |\n"
				<< "| Violets are blue,                                             |\n"
				<< "| A little bit of poetry                                        |\n"
				<< "| For an a-hole like you                                        |\n"
				<< "|---------------------------------------------------------------|\n\n";
}