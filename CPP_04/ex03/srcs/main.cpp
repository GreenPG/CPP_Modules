/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:59:56 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 17:54:20 by gpasquet         ###   ########.fr       */
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

	return 0;
}
