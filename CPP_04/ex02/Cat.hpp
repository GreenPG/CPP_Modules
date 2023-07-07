/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:39:03 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/05 09:09:47 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
{
	 public:
		Cat();
		~Cat();
		Cat (const Cat &copy);
		Cat &operator=(const Cat&);

		void		makeSound(void) const;
		std::string	getIdea(int index) const;
		void		setIdeas(int index, std::string idea);
	private:
		Brain*	brain;
};

#endif
