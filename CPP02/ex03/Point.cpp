#include "Point.hpp"

Point::Point() : x(0), y(0) {};

Point::Point(const float x, const float y) : x(x), y(y) {};

Point::Point(const Point &smth) : x(smth.x), y(smth.y) {};

Point&	Point::operator = (const Point &smth)
{
	if (this != &smth)
		*this = Point(smth);
	return (*this);
}

Point::~Point() {};

Fixed	Point::getValueX() const
{
	return x;
}

Fixed	Point::getValueY() const
{
	return y;
}

std::ostream&	operator << (std::ostream &out, const Point &smth)
{
	out << "(" << smth.getValueX() << ", " << smth.getValueY() << ")";
	return out;
}
