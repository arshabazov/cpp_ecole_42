//
// Created by Cristie Dell on 9/6/22.
//

#include "Fixed.hpp"

Fixed::Fixed(void) : m_fxNumber(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	// this->m_fxNumber = other.m_fxNumber;
	*this = other;
}

Fixed::Fixed(const int number) {
	std::cout << "Int constructor called" << std::endl;
	this->m_fxNumber = number << Fixed::s_FractionalBits;
}

Fixed::Fixed(const float number) {
	std::cout << "Float constructor called" << std::endl;
	this->m_fxNumber = (int)roundf(number * (1 << Fixed::s_FractionalBits));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

const Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->m_fxNumber = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	return this->m_fxNumber;
}

void Fixed::setRawBits(int const raw) {
	this->m_fxNumber = raw;
}

float Fixed::toFloat(void) const {
	return (float)this->getRawBits() / (1 << Fixed::s_FractionalBits);
}
int Fixed::toInt(void) const {
	return this->m_fxNumber >> Fixed::s_FractionalBits;
}

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed) {
	stream << fixed.toFloat();
	return stream;
}
