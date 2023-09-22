#include <iostream>
#include <string>
#include "Animal.hpp"

#ifndef	Dog_HPP
#define	Dog_HPP

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(std::string set);
		Dog(Dog const & src);
		~Dog(void);
		Dog &	operator=(Dog const & rhs);
		void		makeSound(void) const;
};

#endif