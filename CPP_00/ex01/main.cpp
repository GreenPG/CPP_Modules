/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:19:10 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:19:11 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>


int	main(void)	{
	PhoneBook	phoneBook;
	std::string	input;
	int			commandID;

	while (1)	{
		std::cout << "Type a command : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return (0);
		if (input.compare("ADD") != 0 && input.compare("SEARCH") != 0 && input.compare("EXIT") != 0)
			std::cout << "Only ADD, SEARCH and EXIT are accepted" << std::endl;
		else	{
		commandID = input.compare("A");
			switch	(commandID)	{
				case (2):
					if (phoneBook.addContact() == -1)
						return (-1);
					break;
				case (4):
					return(0);
				case (18):
					if (phoneBook.search() == -1)
						return (-1);
					break;
			}
		}
	}
	return (0);
}
