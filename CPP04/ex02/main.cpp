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
	std::cout << "---------------------EX00--------------------------" << std::endl;
	{
		std::cout << "------------Animal------------" << std::endl;
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
		std::cout << "------------Wrong Animal------------" << std::endl;
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
	std::cout << "---------------------EX01--------------------------" << std::endl;
	std::cout << std::endl;
	{
		std::cout << "------------Subject main------------" << std::endl;
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		std::cout << "------------My main------------" << std::endl;
		int max = 10;
		Animal *animals[max];
		std::cout << "------------Constructors------------" << std::endl;
		std::cout << "-Dogs:" << std::endl;
		for (int i = 0; i < max/2; i++)			// Creating Dogs
			animals[i] = new Dog();
		std::cout << "-Cats:" << std::endl;
		for (int i = max/2; i < max; i++)		// Creating Cats
			animals[i] = new Cat();
		std::cout << "------------Destructors------------" << std::endl;
		for (int i = 0; i < max; i++)
			delete animals[i];
			
		std::cout << "-------------Ideas-----------------" << std::endl;
		Cat cat;
		Dog dog;

		cat.getBrain()->setIdea("Meow! Meow!", 40);
		Cat copy(cat);
		std::cout << "----------------------------" << std::endl;
		std::cout << "-Cat Ideas:" << std::endl;
		std::cout << "Cat Idea: " << cat.getBrain()->getIdea(0) << std::endl;
		std::cout << "Cat Idea: " << cat.getBrain()->getIdea(1) << std::endl;
		std::cout << "Cat Idea: " << cat.getBrain()->getIdea(2) << std::endl;
		std::cout << "Cat Idea: " << cat.getBrain()->getIdea(40) << std::endl;
		std::cout << "Cat Idea: " << cat.getBrain()->getIdea(101) << std::endl;
		std::cout << "-copyCat Ideas:" << std::endl;
		std::cout << "Cat Idea: " << copy.getBrain()->getIdea(0) << std::endl;
		std::cout << "Cat Idea: " << copy.getBrain()->getIdea(1) << std::endl;
		std::cout << "Cat Idea: " << copy.getBrain()->getIdea(2) << std::endl;
		std::cout << "Cat Idea: " << cat.getBrain()->getIdea(40) << std::endl;
		std::cout << "Cat Idea: " << copy.getBrain()->getIdea(101) << std::endl;
		dog.getBrain()->setIdea("Woof! Woof!", 50);
		Dog copyDog(dog);
		std::cout << "----------------------------" << std::endl;
		std::cout << "-Dog Ideas:" << std::endl;
		std::cout << "Dog Idea: " << dog.getBrain()->getIdea(0) << std::endl;
		std::cout << "Dog Idea: " << dog.getBrain()->getIdea(1) << std::endl;
		std::cout << "Dog Idea: " << dog.getBrain()->getIdea(2) << std::endl;
		std::cout << "Cat Idea: " << dog.getBrain()->getIdea(50) << std::endl;
		std::cout << "Dog Idea: " << dog.getBrain()->getIdea(101) << std::endl;
		std::cout << "-copyDog Ideas:" << std::endl;
		std::cout << "Dog Idea: " << copyDog.getBrain()->getIdea(0) << std::endl;
		std::cout << "Dog Idea: " << copyDog.getBrain()->getIdea(1) << std::endl;
		std::cout << "Dog Idea: " << copyDog.getBrain()->getIdea(2) << std::endl;
		std::cout << "Cat Idea: " << copyDog.getBrain()->getIdea(50) << std::endl;
		std::cout << "Dog Idea: " << copyDog.getBrain()->getIdea(101) << std::endl;

		std::cout << "------------Destructors------------" << std::endl;
	}
	std::cout << "------------Test------------" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}
	std::cout << "---------------------EX02--------------------------" << std::endl << std::endl;
	std::cout << "------------Abstract Class------------" << std::endl;
	{
		//Animal test;
		//Animal *test = new Animal();
		Animal *meta = new Dog();  // It is a pointer to a Dog Class, and not to the Animal class
		delete meta;
	}
	return 0;
}
