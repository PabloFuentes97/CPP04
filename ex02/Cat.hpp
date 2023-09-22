#pragma once

#ifndef	Cat_HPP
#define	Cat_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

#include <iostream>
#include <string>

class Cat : public AAnimal
{
	private:
		Brain	*_brain;
	public:
		Cat(void);
		Cat(std::string set);
		Cat(Cat const & src);
		~Cat(void);
		Cat &	operator=(Cat const & rhs);
		void		makeSound(void) const;
		Brain *getBrain(void) const;
};

#endif