/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 11:01:44 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 11:03:26 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	 public:
		WrongCat();
		~WrongCat();
		WrongCat (const WrongCat &copy);
		WrongCat &operator=(const WrongCat&);
};
