#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
	return;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy){
	std::cout << "Copy constructor called" << std::endl;
	this->_value = copy._value;
}

Fixed & Fixed::operator=(const Fixed &copy){
	std::cout << "Copy assignement operator called" << std::endl;
	if (&copy != this)
		this->_value = copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

class MyClass
{
	 public:
		MyClass();
		~MyClass();
		MyClass (const MyClass &copy);
		MyClass &operator=(const MyClass&);
	 private:
		
};
