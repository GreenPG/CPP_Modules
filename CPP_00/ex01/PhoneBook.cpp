#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <iterator>
#include <string>

PhoneBook::PhoneBook	(void)	{
	this->contactCount = 0;
	return;
}

void	displayContent(std::string content) {
	if (content.length() <= 10) {
		std::cout << std::left  << std::setfill(' ') << std::setw(10);
		std::cout << content;
	}
	else {
		for (int j = 0; j < 9; j++)
			std::cout << content[j];
		std::cout << '.';
	}
	std::cout << '|';
}

void	displayBook(const PhoneBook *phoneBook) {
	std::cout << std::setfill('-') << std::setw(45);
	std::cout << "" << std::endl;
	std::cout << "|  Index   |Last Name |First Name| Nickname |" << std::endl;
	std::cout << std::setfill('-') << std::setw(45);
	std::cout << "" << std::endl;
	for (int i  = 0; i < 8; i++)	{
		std::cout << "|          |          |          |          |" << std::endl;
		std::cout << "|    " << i + 1 << "     |";
		displayContent(phoneBook->contactTab[i].firstName);
		displayContent(phoneBook->contactTab[i].lastName);
		displayContent(phoneBook->contactTab[i].nickName);
		std::cout << std::endl;
	}
	std::cout << std::setfill('-') << std::setw(45);
	std::cout << "" << std::endl;
}

void	displayContact(Contact contact, int id)
{
	std::cout << "ID : " << id << std::endl;
	std::cout << "First Name : " << contact.firstName << std::endl;
	std::cout << "Last Name : " << contact.lastName << std::endl;
	std::cout << "Nickname : " << contact.nickName << std::endl;
	std::cout << "Phone number : " << contact.phoneNumber << std::endl;
	std::cout << "Darkest secret : " << contact.darkestSecret << std::endl;
}

int	showContact(const PhoneBook *phoneBook)
{
	std::string input;
	int			id;

	std::cout << "Contact ID : ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return (-1);
	if (input.length() < 1) {
		std::cout << "Bad ID format" << std::endl;
		return (0);
	}
	if (input[0] < '1' || input[0] > '8') {
		std::cout << "Bad ID format" << std::endl;
		return (0);
	}
	id = input[0] - 48;
	displayContact(phoneBook->contactTab[id - 1], id);
	return (0);
}

int	PhoneBook::search() const {
	displayBook(this);
	if (showContact(this) == -1)
		return (-1);
	return (0);
}

int	PhoneBook::addContact(void) {
	this->contactCount++;
	if (this->contactCount <= 8) {
		if (this->contactTab[this->contactCount - 1].registerContact() == -1)
			return (-1);
	}
	else {
		int	offset;
		offset = (this->contactCount % 8) * 8;
		if (this->contactTab[this->contactCount - offset - 1].registerContact() == -1)
			return (-1);
	}
	return (0);
}
