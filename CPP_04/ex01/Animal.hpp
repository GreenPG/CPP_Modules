/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:27:28 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 11:10:52 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	 public:
		Animal(void);
		virtual ~Animal(void);
		Animal (const Animal &copy);
		Animal &operator=(const Animal&);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string	type;
};

#endif
