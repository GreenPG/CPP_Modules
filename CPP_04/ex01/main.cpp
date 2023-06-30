/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:43:31 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/30 10:40:14 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <new>

int main()
{
	{
		std::cout << "*** Constructors tests ***" << std::endl << std::endl;

		Dog	*dog = new Dog();
		Cat	*cat = new Cat();

		std::cout << std::endl;
		
		cat->makeSound();
		std::cout << "Cat thinks of " << cat->getIdea(20) << std::endl;
		dog->makeSound();
		std::cout << "Dog thinks of " << dog->getIdea(20) << std::endl;
		
		std::cout << std::endl;

		delete dog;
		delete cat;
	}

	std::cout << std::endl;

	{
		std::cout << "*** Copy and assignement tests ***" << std::endl << std::endl;
		
		Dog	*dog = new Dog();
		Dog	*doggy = new Dog(*dog);

		Cat	*cat = new Cat();
		Cat	*catty = new Cat(*cat);

		std::cout << std::endl;

		catty->makeSound();
		std::cout << "Catty thinks of " << catty->getIdea(4) << std::endl;
		doggy->makeSound();
		std::cout << "Doggy thinks of " << doggy->getIdea(4) << std::endl;

		std::cout << std::endl;

		cat->setIdeas(4, "conquering the world");
		dog->setIdeas(4, "scratching");

		*doggy = *dog;
		*catty = *cat;
		
		std::cout << std::endl;

		std::cout << "Catty thinks of " << catty->getIdea(4) << std::endl;
		std::cout << "Doggy thinks of " << doggy->getIdea(4) << std::endl;

		std::cout << std::endl;
		
		delete dog;
		delete cat;
		delete doggy;
		delete catty;
	}

	std::cout << std::endl;
	
	{
		std::cout << "*** Animal Array test ***" << std::endl << std::endl;

		Animal *animalArray[10];

		for (int i = 0; i < 10; i++) {
			if (i % 2 == 0)
				animalArray[i] = new Dog();
			else
				animalArray[i] = new Cat();
		}

		for (int i = 0; i < 10; i++) {
			animalArray[i]->makeSound();
		}
		
		for (int i = 0; i < 10; i++) {
			delete animalArray[i];
		}

	}

	return 0;
}
