/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:20:12 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:20:13 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie
{
	 public:
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
	 private:
		std::string	name;
};
