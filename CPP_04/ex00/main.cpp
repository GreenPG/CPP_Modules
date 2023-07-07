/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:43:31 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/05 09:05:59 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <new>

int main()
{
	{
		std::cout << "*** Constructor tests ***" << std::endl << std::endl;

		Animal	*meta = new Animal();
		Animal	*dog = new Dog();
		Animal 	*cat = new Cat();

		std::cout << std::endl;

		std::cout << meta->getType() << std::endl;
		std::cout << dog->getType() << std::endl;
		std::cout << cat->getType() << std::endl;

		meta->makeSound();
		dog->makeSound();
		cat->makeSound();

		std::cout << std::endl;

		delete cat;
		delete meta;
		delete dog;
	}

	std::cout << std::endl;

	{
		std::cout << "*** Copy and assignement test ***" << std::endl << std::endl;

		Animal	*meta = new Animal();
		Animal	*meti = new Animal(*meta);
		
		std::cout << std::endl;
		
		Dog		*dog = new Dog();
		Dog		*doggy = new Dog(*dog);
		
		std::cout << std::endl;
		
		Cat	 	*cat = new Cat();
		Cat		*catty = new Cat(*cat);
		
		std::cout << std::endl;

		meti->makeSound();
		doggy->makeSound();
		catty->makeSound();

		std::cout << std::endl;

		*meti = *meta;
		*doggy = *dog;
		*catty = *cat;

		std::cout << std::endl;

		meti->makeSound();
		doggy->makeSound();
		catty->makeSound();

		std::cout << std::endl;

		delete meta;
		delete dog;
		delete cat;
		delete meti;
		delete doggy;
		delete catty;
	}

	std::cout << std::endl;

	{
		std::cout << "*** WrongAnimal tests ***" << std::endl << std::endl;

		Animal	*cat = new Cat();
		WrongAnimal	*wrongCat = new WrongCat();

		cat->makeSound();
		wrongCat->makeSound();

		delete cat;
		delete wrongCat;

	}
	return 0;
}
