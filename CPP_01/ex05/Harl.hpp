/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:22:28 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/07 10:05:07 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl
{
	 public:
		Harl();
		~Harl();

		void complain( std::string level );
	 private:
		void debug( void );	
		void info( void );
		void warning( void );
		void error( void );
};

 typedef void (Harl::*complainFunction)(void) ;
