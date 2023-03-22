#include <string>
#include <iostream>

class	Contact	{

public:
	Contact(void);

	int	registerContact(void);
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
};
