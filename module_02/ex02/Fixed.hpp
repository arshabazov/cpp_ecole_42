//
// Created by Cristie Dell on 10/6/22.
//

#ifndef C_PP_FIXED_HPP
#define C_PP_FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>

class Fixed {

private:
	int m_fxNumber;
	static const int s_FractionalBits = 8;
	

public:
	Fixed(void);
	Fixed(const Fixed& other);
	Fixed(const int number);
	Fixed(const float number);
	~Fixed(void);

	// Member functions
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	// Assignment Operator Overloading =
	const Fixed& operator = (const Fixed& other);

	// Comparison Operator Overloading < > <= >= == !=
	bool operator < (const Fixed& other) const;
	bool operator > (const Fixed& other) const;
	bool operator <= (const Fixed& other) const;
	bool operator >= (const Fixed& other) const;
	bool operator == (const Fixed& other) const;
	bool operator != (const Fixed& other) const;

	// Arithmetic Operator Overloading + - * /
	Fixed operator + (const Fixed& other);
	Fixed operator - (const Fixed& other);
	Fixed operator * (const Fixed& other);
	Fixed operator / (const Fixed& other);

	// Increment Decrement Overloading ++ --
	const Fixed& operator ++ ();
	Fixed operator ++ (int);
	const Fixed& operator -- ();
	Fixed operator -- (int);

	// Static min max
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);

#endif //C_PP_FIXED_HPP
