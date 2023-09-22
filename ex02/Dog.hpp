#pragma once

#ifndef	Dog_HPP
#define	Dog_HPP

#include <iostream>
#include <string>

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*_brain;
	public:
		Dog(void);
		Dog(std::string set);
		Dog(Dog const & src);
		~Dog(void);
		Dog &	operator=(Dog const & rhs);
		void		makeSound(void) const;
		Brain* getBrain(void) const;
};

#endif