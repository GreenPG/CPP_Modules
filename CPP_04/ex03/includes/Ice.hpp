/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:30:40 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/10 15:42:27 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria	
{
	 public:
		Ice();
		Ice(std::string const & type);
		~Ice();
		Ice (const Ice &copy);
		Ice &operator=(const Ice&);

		AMateria* clone() const;
		void use(ICharacter& target);
	 private:
		std::string type;
};

#endif
