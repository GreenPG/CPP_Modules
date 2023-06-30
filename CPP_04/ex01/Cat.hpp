/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:39:03 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/29 14:53:24 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	 public:
		Cat();
		~Cat();
		Cat (const Cat &copy);
		Cat &operator=(const Cat&);

		void		makeSound(void) const;
		std::string	getType(void) const;
		std::string	getIdea(int index) const;
		void		setIdeas(int index, std::string idea);

	private:
		Brain*	brain;
};

#endif
