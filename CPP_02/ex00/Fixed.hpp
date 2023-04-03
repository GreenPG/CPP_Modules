/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:23:14 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:23:14 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Fixed 
{
	 public:
		Fixed();
		~Fixed();
		Fixed (const Fixed &copy);
		Fixed &operator=(const Fixed&);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );		
	 private:
		int					_value;
		static int const	_frabBitsNb = 8;
};
