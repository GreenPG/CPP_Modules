/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:21:43 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/07 13:56:11 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
#include <string>

class Weapon
{
	 public:
		Weapon(std::string type);
		~Weapon();

		const std::string	&getType(void) const;
		void				setType(std::string type);

	 private:
		std::string type;
};

#endif
