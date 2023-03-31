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

	std::cout << prompt;
	std::getline(std::cin, field);	
	if (std::cin.eof())
		return ("");
	if (field == "") {
		std::cout << "Contact fields can't be empty" << std::endl;
		field = fillField(prompt);
	}
	else if (prompt.compare("Phone number : ") == 0 && field.find_first_not_of("0123456789") != std::string::npos) {
		std::cout << "Phone number must only be digits" << std::endl;
		field = fillField(prompt);
	}
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
