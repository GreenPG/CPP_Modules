/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:19:54 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:19:55 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)	{
	Zombie	*newZombie = new Zombie(name);
	return (newZombie);
}
