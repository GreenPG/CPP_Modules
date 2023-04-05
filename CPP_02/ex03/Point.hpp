/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 09:32:29 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/05 11:47:24 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
	 public:
		Point(void);
		Point(float const x, float const y);
		~Point(void);
		Point (const Point &copy);
		Point &operator=(const Point&);

		Fixed	getX(void) const;
		Fixed	getY(void) const;
	 private:
		Fixed const	x;
		Fixed const	y;

};
