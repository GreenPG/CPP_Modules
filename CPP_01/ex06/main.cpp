/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:22:55 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:22:55 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(int ac, char **av) {
	Harl harl;

	if (ac != 2) {
		std::cout << "One parameter expected" << std::endl;
		return (1);
	}
	harl.complain(av[1]);
	return (0);
}
