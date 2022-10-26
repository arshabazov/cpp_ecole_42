//
// Created by Cristie Dell on 9/6/22.
//

#ifndef C_PP_FIXED_HPP
#define C_PP_FIXED_HPP

#include <iostream>


class Fixed {

private:
	int m_fxNumber;
	static const int s_FractionalBits = 8;
	

public:
	Fixed(void);
	Fixed(const Fixed& other);
	~Fixed(void);

	const Fixed& operator=(const Fixed& other);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif //C_PP_FIXED_HPP
