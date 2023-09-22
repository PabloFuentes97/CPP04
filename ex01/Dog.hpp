#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

#ifndef	Dog_HPP
#define	Dog_HPP

class Dog : public Animal
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