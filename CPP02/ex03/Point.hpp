#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &smth);
	Point&	operator = (const Point &smth);
	~Point();

	Fixed	getValueX(void) const;
	Fixed	getValueY(void) const;

private:
	const Fixed	x;
	const Fixed	y;
};

bool			bsp(Point const a, Point const b, Point const c, Point const P);
std::ostream&	operator << (std::ostream &out, const Point &other);

#endif