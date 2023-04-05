/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:23:40 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/04 17:29:32 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(): _value(0) {
	return;
}

Fixed::Fixed(const int value) {
	this->_value = value << this->_fracBitsNb;
}

Fixed::Fixed(const float value) {
	this->_value = roundf(value * (1 << this->_fracBitsNb));
}

Fixed::~Fixed(){
}

Fixed::Fixed(const Fixed &copy){
	this->_value = copy._value;
}

Fixed & Fixed::operator=(const Fixed &copy){
	if (&copy != this)
		this->_value = copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const {
	return (this->_value);
}

void	Fixed::setRawBits( int const raw ) {
	this->_value = raw;
}

float	Fixed::toFloat( void ) const {
	return ((float)this->_value / (float)(1 << this->_fracBitsNb));
}

int		Fixed::toInt( void ) const {
	return(this->_value >> this->_fracBitsNb);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)	{
	o << rhs.toFloat();
	return(o);
}

bool	Fixed::operator>(const Fixed& rhs) {
	return(this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator<(const Fixed& rhs) {
	return(this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>=(const Fixed& rhs) {
	return(this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<=(const Fixed& rhs) {
	return(this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator==(const Fixed& rhs) {
	return(this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(const Fixed& rhs) {
	return (this->toFloat() != rhs.toFloat());
}

Fixed Fixed::operator+(const Fixed& rhs) {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) {
	return (this->toFloat() - rhs.toFloat());
}
Fixed Fixed::operator/(const Fixed& rhs) {
	return (this->toFloat() / rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) {
	return (this->toFloat()	* rhs.toFloat());
}

Fixed Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	this->setRawBits(this->getRawBits() + 1);
	return temp;
}

Fixed Fixed::operator--(void) {
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	this->setRawBits(this->getRawBits() - 1);
	return temp;
}

Fixed		&Fixed::min(Fixed &f1, Fixed &f2) {
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

Fixed const	&Fixed::min(Fixed const &f1, Fixed const &f2) {
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	else
		return (f2);
}

Fixed		&Fixed::max(Fixed &f1, Fixed &f2) {
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

Fixed const	&Fixed::max(Fixed const &f1, Fixed const &f2) {
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	else
		return (f2);
}
