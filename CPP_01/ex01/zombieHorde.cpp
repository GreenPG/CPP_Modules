/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:20:55 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:20:56 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>

Zombie* zombieHorde( int N, std::string name ) {
	Zombie	*hord = new	Zombie[N];
	
	if (N < 1)
		return (NULL);
	for (int i = 0; i < N; i++) {
		hord[i].setName(name);
	}
	return (hord);
}
