#include "Contact.hpp"

Contact::Contact(void)	{
	this->firstName = "";
	this->lastName = "";
	this->nickName = "";
	this->phoneNumber = "";
	this->darkestSecret = "";
}

std::string	fillField(std::string prompt)
{
	std::string field;

	while (1)	{
		std::cout << prompt;
		std::getline(std::cin, field);	
		if (std::cin.eof())
			return ("");
		if (field == "")
			std::cout << "Contact fields can't be empty" << std::endl;
		else
			break;
	}
	std::cout << std::endl;
	return (field);
}

int	Contact::registerContact(void)	{
	this->firstName = fillField("First Name : ");
	if (this->firstName == "")
		return (-1);
	this->lastName = fillField("Last Name : ");
	if (this->lastName == "")
		return (-1);
	this->nickName = fillField("Nickname : ");
	if (this->nickName == "")
		return (-1);
	this->phoneNumber = fillField("Phone number : ");
	if (this->phoneNumber == "")
		return (-1);
	this->darkestSecret  = fillField("Darkest secret : ");
	if (this->darkestSecret == "")
		return (-1);
	return (0);
}
