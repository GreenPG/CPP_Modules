/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:36:50 by gpasquet          #+#    #+#             */
/*   Updated: 2023/05/19 16:04:28 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class AMateria
{
	 public:
		AMateria();
		AMateria(std::string const & type);
		~AMateria();
		AMateria (const AMateria &copy);
		AMateria &operator=(const AMateria&);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	
	 protected:
		std::string	type;
		
};
