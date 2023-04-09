/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:43:31 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 17:35:10 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <new>

int main()
{
	AAnimal *cat = new Cat("rule the world");
	AAnimal *dog = new Dog("bones");
	
	dog->makeSound();
	cat->makeSound();
	std::cout << "The dog is of type " << dog->getType() << std::endl;
	std::cout << "The cat is of type " << cat->getType() << std::endl;

	std::string dogIdea = dog->getBrain()->getIdea(0);
	std::string catIdea = cat->getBrain()->getIdea(0);
	
	std::cout << "The dog thinks of " << dogIdea << std::endl;
	std::cout << "The cat thinks of " << catIdea << std::endl;
	
	delete cat;
	delete dog;
	return 0;
}
