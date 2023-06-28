#include "Point.hpp"
#include <iostream>

int	sign(Point vertices1, Point vertices2, Point point) {
	Fixed sign;

	sign = (((vertices1.getX() - vertices2.getX()) * (point.getY()- vertices1.getY()))  - ((vertices1.getY() - vertices2.getY()) * (point.getX() - vertices1.getX())));
	if (sign > 0) 
		return (1);
	else if (sign < 0) 
		return (-1);
	else
		return (0);
}

bool	bsp( Point const a, Point const b, Point const c, Point const point) {
	if (sign(a, b, point) != 0 && sign(a, b, point) == sign(a, b, c)) {
		if (sign(a, c, point) != 0 && sign(a, c, point) == sign(a, c, b)) {
			if (sign(b, c, point) != 0 && sign(b, c, point) == sign(b, c, a))
				return (true);
		}
	}
	return (false);
}

int	main(void) {
	Point const	a(0, 0);
	Point const	b(0, 2);
	Point const	c(2, 0);
	Point const	point1(1,0.5);
	Point const	point2(-1,1);
	Point const	point3(0,1);
	Point const	point4(2.5,2.5);

	std::cout << "A: x = " << a.getX() << " y = " << a.getY() << std::endl;	

	std::cout << "Triangle A(0, 0)B(0, 2)C(2, 0)" << std::endl;
	std::cout << "Point 1 (1, 0.5)" << std::endl;
	if (bsp(a, b, c, point1) == true)
		std::cout << "The point is in the triangle" << std::endl;
	else
		std::cout << "The point is not in the triangle" << std::endl;
	std::cout << "Point 2 (-1, 1)" << std::endl;
	if (bsp(a, b, c, point2) == true)
		std::cout << "The point is in the triangle" << std::endl;
	else
		std::cout << "The point is not in the triangle" << std::endl;
	std::cout << "Point 3 (0, 1)" << std::endl;
	if (bsp(a, b, c, point3) == true)
		std::cout << "The point is in the triangle" << std::endl;
	else
		std::cout << "The point is not in the triangle" << std::endl;
	std::cout << "Point 4 (2,5, 2,5)" << std::endl;
	if (bsp(a, b, c, point3) == true)
		std::cout << "The point is in the triangle" << std::endl;
	else
		std::cout << "The point is not in the triangle" << std::endl;
	return (0);
}
