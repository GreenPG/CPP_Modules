/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:32:18 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 17:34:33 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	 public:
		Dog();
		Dog(std::string idea);
		~Dog();
		Dog (const Dog &copy);
		Dog &operator=(const Dog&);

		void		makeSound(void) const;
		std::string	getType(void) const;
		Brain		*getBrain(void) const;
	private:
		Brain*	brain;
};

#endif
