/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:19:01 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:19:02 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "Contact.hpp"

class	PhoneBook	{

public:
	PhoneBook();

	Contact	contactTab[8];
	int	search() const;
	int	addContact();
private:
	int		contactCount;
};
