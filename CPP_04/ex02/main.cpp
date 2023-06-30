/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:43:31 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/30 11:06:29 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <new>

int main()
{
	//AAnimal meta;
	AAnimal *cat = new Cat();
	AAnimal *dog = new Dog();
	
	dog->makeSound();
	cat->makeSound();
	std::cout << "The dog is of type " << dog->getType() << std::endl;
	std::cout << "The cat is of type " << cat->getType() << std::endl;
	
	delete cat;
	delete dog;
	return 0;
}
