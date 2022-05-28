#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed d_a = (b.getValueX() - a.getValueX()) * (point.getValueY() - c.getValueY()) - (point.getValueX() - a.getValueX()) * (b.getValueY() - a.getValueY());;
	Fixed d_b = (c.getValueX() - b.getValueX()) * (point.getValueY() - b.getValueY()) - (point.getValueX() - b.getValueX()) * (c.getValueY() - b.getValueY());
	Fixed d_c = (a.getValueX() - c.getValueX()) * (point.getValueY() - c.getValueY()) - (point.getValueX() - c.getValueX()) * (a.getValueY() - c.getValueY());

	return ((d_a > 0 && d_b > 0 && d_c > 0) || (d_a < 0 && d_b < 0 && d_c < 0));
}