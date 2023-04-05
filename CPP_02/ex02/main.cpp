/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:23:50 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/04 17:34:24 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(5);
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " <<  a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << std::endl;
	std::cout << "--a = " << --a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = " <<  a-- << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << std::endl;
	std::cout << "b = " <<  b << std::endl;
	std::cout << "max(a,b) = " << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a,b) = " << Fixed::min( a, b ) << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "c = " <<  c << std::endl;
	std::cout << "max(a,c) = " << Fixed::max( a, c ) << std::endl;
	std::cout << "min(a,c) = " << Fixed::min( a, c ) << std::endl;
	std::cout << std::endl;
	a = 1;
	std::cout << "a = " << a << " c = " << c << std::endl;
	std::cout << "a + c = " << a + c << std::endl;
	std::cout << "a - c = " << a - c << std::endl;
	std::cout << "a * c = " << a * c << std::endl;
	std::cout << "a / c = " << a / c << std::endl;
	std::cout << std::endl;
	std::cout << "a == c = " << (a == c) << std::endl;
	std::cout << "a != c = " << (a != c) << std::endl;
	std::cout << "a >= c = " << (a >= c) << std::endl;
	std::cout << "a <= c = " << (a <= c) << std::endl;
	std::cout << "a < c = " << (a < c) << std::endl;
	std::cout << "a > c = " << (a > c) << std::endl;
	return 0;
}
