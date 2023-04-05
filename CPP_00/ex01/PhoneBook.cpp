/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:18:52 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/04 15:57:43 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <iterator>
#include <string>

PhoneBook::PhoneBook	(void)	{
	this->contactCount = 0;
	return;
}

Contact	PhoneBook::getContact(int index) const  {
	return (this->contactTab[index]);
}

void	displayContent(std::string content) {
	if (content.length() <= 10) {
		std::cout << std::right << std::setfill(' ') << std::setw(10);
		std::cout << content;
	}
	else {
		for (int j = 0; j < 9; j++)
			std::cout << content[j];
		std::cout << '.';
	}
	std::cout << '|';
}

void	PhoneBook::displayBook() const{
	Contact	currentContact;

	std::cout << std::setfill('-') << std::setw(45);
	std::cout << "" << std::endl;
	std::cout << "|  Index   | Last Name|First Name|  Nickname|" << std::endl;
	std::cout << std::setfill('-') << std::setw(45);
	std::cout << "" << std::endl;
	for (int i  = 0; i < 8; i++)	{
		currentContact = this->getContact(i);
		std::cout << "|          |          |          |          |" << std::endl;
		std::cout << '|' << std::right << std::setfill(' ') << std::setw(10);
		std::cout << i + 1 << '|';
		displayContent(currentContact.getContent("firstName"));
		displayContent(currentContact.getContent("lastName"));
		displayContent(currentContact.getContent("nickName"));
		std::cout << std::endl;
	}
	std::cout << std::setfill('-') << std::setw(45);
	std::cout << "" << std::endl;
}

void	displayContact(Contact contact, int id)
{
	std::cout << "ID : " << id << std::endl;
	std::cout << "First Name : " << contact.getContent("firstName") << std::endl;
	std::cout << "Last Name : " << contact.getContent("lastName") << std::endl;
	std::cout << "Nickname : " << contact.getContent("nickName") << std::endl;
	std::cout << "Phone number : " << contact.getContent("phoneNumber") << std::endl;
	std::cout << "Darkest secret : " << contact.getContent("darkestSecret") << std::endl;
}

int	PhoneBook::showContact() const{
	std::string input;
	std::string	content;
	Contact		currentContact;
	int			id;

	std::cout << "Contact ID : ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return (-1);
	if (input.length() != 1) {
		std::cout << "Bad ID format" << std::endl;
		return (0);
	}
	if (input[0] < '1' || input[0] > '8') {
		std::cout << "Bad ID format" << std::endl;
		return (0);
	}
	id = input[0] - 48;
	currentContact = this->getContact(id - 1);
	content = currentContact.getContent("firstName");
	if (content.compare("") == 0) {
		std::cout << "No contact for ID " << id << std::endl;
		return (0);
	}
	displayContact(currentContact, id);
	return (0);
}

int	PhoneBook::search() const {
	this->displayBook();
	if (showContact() == -1)
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
