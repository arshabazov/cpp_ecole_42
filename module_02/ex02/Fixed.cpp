//
// Created by Cristie Dell on 10/6/22.
//

#include "Fixed.hpp"

//CONSTRUCTORS
//-----------------------------------------------------------//
Fixed::Fixed(void) : m_fxNumber(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::Fixed(const int number) {
	// std::cout << "Int constructor called" << std::endl;
	this->m_fxNumber = number << Fixed::s_FractionalBits;
}

Fixed::Fixed(const float number) {
	// std::cout << "Float constructor called" << std::endl;
	this->m_fxNumber = (int)roundf(number * (1 << Fixed::s_FractionalBits));
}

// DESTRUCTOR
//-----------------------------------------------------------//
Fixed::~Fixed(void) {
	// std::cout << "Destructor called" << std::endl;
}

// MEMBER FUNCTIONS
//-----------------------------------------------------------//
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

// EQUAL SIGN OPERATOR OVERLOADING =
//-----------------------------------------------------------//
const Fixed& Fixed::operator = (const Fixed& other) {
	// std::cout << "Copy assignment operator called" << std::endl;
	this->m_fxNumber = other.getRawBits();
	return *this;
}

// COMPARISON OPERATOR OVERLOADING > <= > >= == !=
//-----------------------------------------------------------//
bool Fixed::operator < (const Fixed& other) const {
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator > (const Fixed& other) const {
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator <= (const Fixed& other) const {
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator >= (const Fixed& other) const {
	return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator == (const Fixed& other) const {
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator != (const Fixed& other) const {
	return this->getRawBits() != other.getRawBits();
}

// ARITHMETIC OPERATOR OVERLOADING
//-----------------------------------------------------------//
Fixed Fixed::operator + (const Fixed& other) {
	return Fixed(this->getRawBits() + other.getRawBits());
}

Fixed Fixed::operator - (const Fixed& other) {
	return Fixed(this->getRawBits() - other.getRawBits());
}

Fixed Fixed::operator * (const Fixed& other) {
	Fixed tmp(*this);

	long long product = tmp.getRawBits() * other.getRawBits();
	product >>= Fixed::s_FractionalBits;
	tmp.setRawBits((int)product);

	return tmp;
}

Fixed Fixed::operator / (const Fixed& other) {
	Fixed tmp(*this);
	long long product = tmp.getRawBits();
	product = (product  << Fixed::s_FractionalBits) / other.getRawBits();
	tmp.setRawBits((int)product);
	
	return tmp;
}

// INCREMENT DECREMENT OVERLOADING ++ --
//-----------------------------------------------------------//
const Fixed& Fixed::operator ++ () {
	this->m_fxNumber++;
	
	return *this;
}

Fixed Fixed::operator ++ (int) {
	Fixed tmp(*this);
	this->m_fxNumber++;
	
	return (tmp);
}
const Fixed& Fixed::operator -- () {
	this->m_fxNumber--;
	
	return *this;
}
Fixed Fixed::operator -- (int) {
	Fixed tmp(*this);
	this->m_fxNumber--;
	
	return tmp;
}

// STATIC MIN MAX
//-----------------------------------------------------------//
Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return a < b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return a > b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return a > b ? a : b;
}

// IOSTREAM OPERATOR OVERLOADING
//-----------------------------------------------------------//
std::ostream& operator<<(std::ostream& stream, const Fixed& fixed) {
	stream << fixed.toFloat();
	return stream;
}
