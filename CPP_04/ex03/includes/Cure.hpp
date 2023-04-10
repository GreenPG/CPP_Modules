/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:42:09 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/10 15:43:27 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria	
{
	 public:
		Cure();
		Cure(std::string const & type);
		~Cure();
		Cure (const Cure &copy);
		Cure &operator=(const Cure&);

		AMateria* clone() const;
		void use(ICharacter& target);
	 private:
		std::string type;
};

#endif
