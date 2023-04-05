/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:33:09 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/05 14:01:20 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): x(0), y(0) {
}

Point::Point(float const x, float const y): x(x), y(y) {
}

Point::~Point(void){
}

Point::Point(const Point &copy): x(copy.x), y(copy.y){
}

Point & Point::operator=(const Point &copy){
	if (&copy != this)
	{
		(Fixed)this->x = copy.getX();
		(Fixed)this->y = copy.getY();
	}
	return (*this);
}

Fixed	Point::getX(void) const{
	return (this->x);
}

Fixed	Point::getY(void) const{ 
	return (this->y);
}
