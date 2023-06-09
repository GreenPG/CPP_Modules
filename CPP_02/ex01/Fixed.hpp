/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:23:46 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 14:50:09 by gpasquet         ###   ########.fr       */
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
		Fixed &operator=(const Fixed&);

		int					getRawBits( void ) const;
		void				setRawBits( int const raw );		
		float				toFloat( void ) const;
		int					toInt( void ) const;
		int					intToBinary(int decimal) const;
		int					binaryToInt(int binary) const;
	 private:
		int					_value;
		static int const	_fracBitsNb = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);		
