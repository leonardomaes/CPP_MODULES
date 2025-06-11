/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaes <lmaes@student.42porto.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:23:34 by lmaes             #+#    #+#             */
/*   Updated: 2025/06/05 12:23:35 by lmaes            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		//const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		//meta->makeSound();
		//delete	meta;
		delete	j;
		delete	i;
	}
	std::cout << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete	meta;
		delete	j;
		delete	i;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	{								// Subject main
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		delete j;
		delete i;
	}
	std::cout << std::endl;
	{								// My main
		int max = 10;
		Animal *animals[max];
		std::cout << "------------Constructors------------" << std::endl;
		for (int i = 0; i < max/2; i++)			// Creating Dogs
			animals[i] = new Dog();
		for (int i = max/2; i < max; i++)		// Creating Cats
			animals[i] = new Cat();
		std::cout << "------------Destructors------------" << std::endl;
		for (int i = 0; i < max; i++)
			delete animals[i];
			
		std::cout << "-------------Ideas-----------------" << std::endl;
		Cat cat;
		Dog dog;

		Cat copy(cat);
		std::cout << "-------------Original---------------" << std::endl;
		std::cout << "Cat Idea: " << cat.getBrain()->getIdea(0) << std::endl;
		std::cout << "Cat Idea: " << cat.getBrain()->getIdea(1) << std::endl;
		std::cout << "Cat Idea: " << cat.getBrain()->getIdea(2) << std::endl;
		std::cout << "Cat Idea: " << cat.getBrain()->getIdea(101) << std::endl;
		std::cout << "-------------Copy---------------" << std::endl;
		std::cout << "Cat Idea: " << copy.getBrain()->getIdea(0) << std::endl;
		std::cout << "Cat Idea: " << copy.getBrain()->getIdea(1) << std::endl;
		std::cout << "Cat Idea: " << copy.getBrain()->getIdea(2) << std::endl;
		std::cout << "Cat Idea: " << copy.getBrain()->getIdea(101) << std::endl;

		std::cout << "------------Final------------" << std::endl;
	}
	std::cout << "------------------------" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "------------------------" << std::endl << std::endl;
	std::cout << "------------Abstract Class------------" << std::endl;
	{
		//Animal test;
		//Animal *test = new Animal();
		Animal *meta = new Dog();  // It is a pointer to a Dog, and not to the Animal class
		delete meta;
	}
	return 0;
}
