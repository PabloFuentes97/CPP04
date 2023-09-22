#include <iostream>
#include <string>

#ifndef	Animal_HPP
#define	Animal_HPP

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(std::string name);
		Animal(Animal const & src);
		virtual ~Animal(void);
		Animal &	operator=(Animal const & rhs);
		std::string	getType(void) const;
		virtual void makeSound(void) const;
};

#endif