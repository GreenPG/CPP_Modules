/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:27:28 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 17:34:43 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class AAnimal
{
	 public:
		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal (const AAnimal &copy);
		AAnimal &operator=(const AAnimal&);

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
		virtual	Brain	*getBrain(void) const = 0;
	protected:
		std::string	type;
};

#endif
