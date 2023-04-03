/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:22:16 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:22:19 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void) {
	Harl harl;

	std::cout << "DEBUG : ";
	harl.complain("DEBUG");
	std::cout << "INFO: ";
	harl.complain("INFO");
	std::cout << "WARNING : ";
	harl.complain("WARNING");
	std::cout << "ERROR : ";
	harl.complain("ERROR");
	return (0);
}
