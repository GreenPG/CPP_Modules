/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:19:01 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/04 15:56:36 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "Contact.hpp"

class	PhoneBook	{

public:
	PhoneBook();

	int		search() const;
	int		addContact();
private:
	Contact	contactTab[8];
	int		contactCount;
	int		showContact() const;
	Contact	getContact(int index) const;	
	void	displayBook() const;
};
