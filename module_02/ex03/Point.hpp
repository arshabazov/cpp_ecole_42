//
// Created by Cristie Dell on 9/12/22.
//

#ifndef C_PP_POINT_HPP
#define C_PP_POINT_HPP

#include "Fixed.hpp"


class Point {
private:
	Fixed const x;
	Fixed const y;

public:
	// Constructor/Desctructor
	Point(void);
	Point(const float x, const float y);
	Point(const Point& point);
	~Point(void);

	// Assignment Operator Overloading =
	const Point& operator = (const Point& other);

	// Getters
	const Fixed& getX() const;
	const Fixed& getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream& operator << (std::ostream& stream, const Point& point);

#endif //C_PP_POINT_HPP
