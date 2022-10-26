//
// Created by Cristie Dell on 9/12/22.
//

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}

Point::Point(const Point& point) : x(point.getX()), y(point.getY()) {}

Point::~Point(void) {}

const Point& Point::operator = (const Point& other) {
	(Fixed)this->x = other.getX();
	(Fixed)this->y = other.getY();
	
	return *this;
}

const Fixed& Point::getX() const {
	return this->x;
}

const Fixed& Point::getY() const {
	return this->y;
}

std::ostream& operator << (std::ostream& stream, const Point& point) {
	stream << "x = " << point.getX() << " y = " << point.getY();
	return (stream);
}