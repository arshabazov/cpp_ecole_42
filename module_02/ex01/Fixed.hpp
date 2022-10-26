//
// Created by Cristie Dell on 9/6/22.
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

	const Fixed& operator=(const Fixed& other);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);

#endif //C_PP_FIXED_HPP
