//
// Created by Cristie Dell on 8/25/22.
//

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string Contact::getFirstName() const {
	return this->first_name;
}

std::string Contact::getLastName() const {
	return this->last_name;
}

std::string Contact::getNickName() const {
	return this->nickname;
}

std::string Contact::getPhoneNumber() const {
	return this->phone_number;
}

std::string Contact::getSecret() const {
	return this->darkest_secret;
}

void Contact::setFirstName(std::string name) {
	this->first_name = name;
}

void Contact::setLastName(std::string name) {
	this->last_name = name;
}

void Contact::setNickname(std::string nick) {
	this->nickname = nick;
}

void Contact::setPhoneNumber(std::string number) {
	this->phone_number = number;
}

void Contact::setSecret(std::string secret) {
	this->darkest_secret = secret;
}