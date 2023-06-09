/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:44:09 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 08:40:38 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "../includes/ICharacter.hpp"
# include "../includes/AMateria.hpp"

class Ice : public AMateria
{
	 public:
		Ice();
		~Ice();
		Ice (const Ice &copy);
		Ice &operator=(const Ice&);

		std::string const & getType() const; //Returns the materia type
		Ice* clone() const;
		void use(ICharacter& target);
	 private:
		std::string	type;
};

#endif
