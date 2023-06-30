/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:32:18 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/30 11:01:53 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	 public:
		Dog();
		~Dog();
		Dog (const Dog &copy);
		Dog &operator=(const Dog&);

		void		makeSound(void) const;
		std::string	getType(void) const;
		std::string	getIdea(int index) const;
		void		setIdeas(int index, std::string idea);
	private:
		Brain*	brain;
};

#endif
