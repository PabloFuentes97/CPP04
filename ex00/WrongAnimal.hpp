#include <iostream>
#include <string>

#ifndef	WrongAnimal_HPP
#define	WrongAnimal_HPP

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal(void);
		WrongAnimal &	operator=(WrongAnimal const & rhs);
		std::string	getType(void) const;
		void makeSound(void) const;
};

#endif