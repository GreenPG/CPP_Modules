/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:23:50 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 18:09:42 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(10);
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c + b << std::endl;
	std::cout << c - b << std::endl;
	std::cout << c / b << std::endl;
	std::cout << (c > b) << std::endl;
	std::cout << (c < b) << std::endl;
	std::cout << (c == b) << std::endl;
	std::cout << (c != b) << std::endl;
	std::cout << (c <= b) << std::endl;
	std::cout << (c >= b) << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
