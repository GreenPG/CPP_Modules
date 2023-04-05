/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:23:46 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/04 17:20:49 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Fixed 
{
	 public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();
		Fixed (const Fixed &copy);
	  	Fixed	&operator=(const Fixed& rhs);
	  	bool	operator>(const Fixed& rhs);
	  	bool	operator<(const Fixed& rhs);
	  	bool	operator>=(const Fixed& rhs);
	  	bool	operator<=(const Fixed& rhs);
	  	bool	operator==(const Fixed& rhs);
	  	bool	operator!=(const Fixed& rhs);
	  	Fixed 	operator+(const Fixed& rhs);
	  	Fixed 	operator-(const Fixed& rhs);
	  	Fixed 	operator/(const Fixed& rhs);
	  	Fixed 	operator*(const Fixed& rhs);
	  	Fixed 	operator++(void);
	  	Fixed 	operator++(int);
	  	Fixed 	operator--(void);
	  	Fixed 	operator--(int);

		int					getRawBits( void ) const;
		void				setRawBits( int const raw );		
		float				toFloat( void ) const;
		int					toInt( void ) const;
		int					intToBinary(int decimal) const;
		int					binaryToInt(int binary) const;
		static Fixed 		&min(Fixed &f1, Fixed &f2);
		static Fixed const	&min(Fixed const &f1, Fixed const &f2);
		static Fixed 		&max(Fixed &f1, Fixed &f2);
		static Fixed const	&max(Fixed const &f1, Fixed const &f2);
	 private:
		int					_value;
		static int const	_fracBitsNb = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);		
