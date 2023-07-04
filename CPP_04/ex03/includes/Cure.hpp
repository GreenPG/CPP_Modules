/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:48:37 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 08:57:41 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP 
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria
{
	 public:
		Cure();
		~Cure();
		Cure (const Cure &copy);
		Cure &operator=(const Cure&);

		std::string const & getType() const;
		Cure				*clone() const;
		void				use(ICharacter &target);

	 private:
		std::string	type;	
};

#endif
