#include "WrongAnimal.hpp"

	WrongAnimal::WrongAnimal(void) : _type("wrong animal")
	{
		std::cout << "Default WrongAnimal Constructor" << std::endl;
	}
	
	WrongAnimal::WrongAnimal(std::string setType) : _type(setType) 
	{
		std::cout << "Constructor WrongAnimal with name" << std::endl;
	}
	
	WrongAnimal::WrongAnimal(WrongAnimal const & src)
	{
		std::cout << "Copy WrongAnimal Constructor" << std::endl;
		*this = src;
		return ;
	}

	WrongAnimal::~WrongAnimal(void)
	{
		std::cout << "WrongAnimal Destructor" << std::endl;
	}

	std::string	WrongAnimal::getType(void) const
	{
		return(this->_type);
	}

	WrongAnimal &	WrongAnimal::operator=(WrongAnimal const & rhs)
	{
		std::cout << "WrongAnimal assignation operator called" << std::endl;
		this->_type = rhs.getType();
		return (*this);
	}

	void	WrongAnimal::makeSound(void) const 
	{
		std::cout << "I'm an WrongAnimal! *Ambiguous sound*" << std::endl;
	}