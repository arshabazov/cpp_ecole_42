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

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

const Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	// this->m_fxNumber = other.m_fxNumber;
	this->m_fxNumber = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout <<"getRawBits member function called" << std::endl;
	return this->m_fxNumber;
}

void Fixed::setRawBits(int const raw) {
	this->m_fxNumber = raw;
}
