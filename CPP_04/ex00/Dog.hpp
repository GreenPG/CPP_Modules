/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:32:18 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 10:52:02 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	 public:
		Dog();
		~Dog();
		Dog (const Dog &copy);
		Dog &operator=(const Dog&);

		void		makeSound(void) const;
		std::string	getType(void) const;

};

#endif
