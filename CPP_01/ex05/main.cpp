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
