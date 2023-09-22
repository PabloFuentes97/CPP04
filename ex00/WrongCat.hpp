#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

#ifndef	WrongCat_HPP
#define	WrongCat_HPP

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(std::string set);
		WrongCat(WrongCat const & src);
		~WrongCat(void);
		WrongCat &	operator=(WrongCat const & rhs);
		void		makeSound(void) const;
};

#endif