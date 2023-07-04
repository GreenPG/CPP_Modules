/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:21:00 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 08:39:16 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include	"../includes/ICharacter.hpp"
# include	"../includes/AMateria.hpp"
# include	<iostream>

class Character: public ICharacter
{
	 public:
		Character();
		Character(std::string const name);
		~Character();
		Character (const Character &copy);
		Character &operator=(const Character&);
	
		std::string	const & getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);


	 private:
		AMateria	*inventory[4];
		std::string	_name;
};

#endif 
