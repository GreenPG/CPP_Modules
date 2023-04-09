/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:39:03 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 17:34:52 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	 public:
		Cat();
		Cat(std::string idea);
		~Cat();
		Cat (const Cat &copy);
		Cat &operator=(const Cat&);

		void		makeSound(void) const;
		std::string	getType(void) const;
		Brain		*getBrain(void) const;
	private:
		Brain*	brain;
};

#endif
