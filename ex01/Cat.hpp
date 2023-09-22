#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

#ifndef	Cat_HPP
#define	Cat_HPP

class Cat : public Animal
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