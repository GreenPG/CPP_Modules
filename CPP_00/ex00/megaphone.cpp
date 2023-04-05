#include <cctype>
#include <iostream>

int	main(int ac, char **av)	{
	std::string	input;

	if (ac < 2)
		std::cout << "* LOUD AND UNBEAREABLE FEEDBACK NOISE *" << std::endl;
	else	{
		for (int i = 1; i < ac; i++)	{
			input = av[i];
			for (size_t j = 0; j < input.length(); j++)
				std::cout << (char)std::toupper(input[j]);
		}
		std::cout << std::endl;
	}
}
