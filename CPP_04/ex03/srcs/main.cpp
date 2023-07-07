/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:59:56 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/07 15:47:43 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"

int	main(void) {
	{
		std::cout << "*** Materia Source ***" << std::endl << std::endl;

		MateriaSource *src1 = new MateriaSource();
		MateriaSource *src2 = new MateriaSource(*src1);

		*src2 = *src1;

		delete src1;
		delete src2;
	}
	
	std::cout << std::endl;

	{
		std::cout << "*** Materia ***" << std::endl << std::endl;

		AMateria	*ice = new Ice();
		Cure		*cure = new Cure();
		AMateria	*tmp= new Cure(*cure);

		*tmp = *ice;

		delete ice; 
		delete cure;
		delete tmp; 
	}

	std::cout << std::endl;
	
	{
		std::cout << "*** Character ***" << std::endl << std::endl;

		Character	*ch1 = new Character();
		Character	*ch2 = new Character("John");
		Character	*tmp = new Character(*ch2);

		*ch1 = *ch2;

		delete ch1;
		delete ch2;
		delete tmp;
	}

	std::cout << std::endl;

	{
		std::cout << "*** Tests ***" << std::endl << std::endl;
	
		IMateriaSource	*src = new MateriaSource();
		src->learnMateria(new Ice);
		src->learnMateria(new Cure);
		src->learnMateria(new Cure);
		src->learnMateria(new Cure);
		src->learnMateria(new Cure);

		Character	*me = new Character("me");
		ICharacter	*evilDude = new	Character("evil dude");

		AMateria	*tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->equip(tmp);
		tmp = src->createMateria("something");
		me->equip(tmp);

		me->use(0, *evilDude);
		me->use(1, *evilDude);
		me->use(2, *evilDude);
		me->use(3, *evilDude);
		me->use(4, *evilDude);

		tmp = me->getMateria(0);
		me->unequip(0);
		delete tmp;
		me->unequip(3);
		me->unequip(6);

		delete src;
		delete me;
		delete evilDude;
	}

	return 0;
}
