#include <iostream>
#include <string>
#include "Animal.hpp"

#ifndef	Cat_HPP
#define	Cat_HPP

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(std::string set);
		Cat(Cat const & src);
		~Cat(void);
		Cat &	operator=(Cat const & rhs);
		void		makeSound(void) const;
};

#endif