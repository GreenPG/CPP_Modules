#include "PhoneBook.hpp"
#include <iostream>
#include <string>

enum	e_Command_id {ADD, SEARCH, EXIT};

int	main(void)	{
	PhoneBook	phoneBook;
	int			input;

	while (1)	{
		std::cout << "Type a command :";
		std::cin >> input;
		if (input != ADD || input != SEARCH || input != EXIT)
			std::cout << "Only ADD, SEARCH and EXIT are accpeted" << std::endl;
		else	{
			switch	(input)	{
				case (ADD):

				case (SEARCH):

				case (EXIT):
					break;
			}
		}
	}
	return (0);
}
