/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:20:47 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:20:48 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie
{
	 public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void	setName(std::string name);
	 private:
		std::string	name;
};
