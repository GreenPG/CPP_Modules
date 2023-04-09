/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:43:31 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 11:06:32 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <new>

int main()
{
	const Animal* 		meta = new Animal();
	const Animal* 		j = new Dog();
	const Animal* 		i = new Cat();
	const WrongAnimal*	k = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	k->makeSound();
	delete meta;
	delete i;
	delete j;
	delete k;
	return 0;
}
