/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 10:56:55 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 11:01:30 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class WrongAnimal
{
	 public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal (const WrongAnimal &copy);
		WrongAnimal &operator=(const WrongAnimal&);

		void		makeSound(void) const;
		std::string	getType(void) const;
	 protected:
		std::string	type;
		
};
