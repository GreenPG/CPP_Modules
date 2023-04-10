/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:03:27 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/10 15:42:32 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "../includes/ICharacter.hpp"

class AMateria
{
	protected:
		std::string	type;

	public:
			AMateria(void);
			AMateria(std::string const & type);
			virtual ~AMateria(void);
			AMateria (const AMateria &copy);
			AMateria &operator=(const AMateria&);
			
			std::string const & getType() const; //Returns the materia type
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
};

#endif
