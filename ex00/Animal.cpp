#include "Animal.hpp"

	Animal::Animal(void)
	{
		std::cout << "Default Animal Constructor" << std::endl;
	}
	
	Animal::Animal(std::string setType) : _type(setType) 
	{
		std::cout << "Constructor Animal with name" << std::endl;
	}
	
	Animal::Animal(Animal const & src)
	{
		std::cout << "Copy Animal Constructor" << std::endl;
		*this = src;
		return ;
	}

	Animal::~Animal(void)
	{
		std::cout << "Animal Destructor" << std::endl;
	}

	std::string	Animal::getType(void) const
	{
		return(this->_type);
	}

	Animal &	Animal::operator=(Animal const & rhs)
	{
		std::cout << "Animal assignation operator called" << std::endl;
		this->_type = rhs.getType();
		return (*this);
	}

	void	Animal::makeSound(void) const 
	{
		std::cout << "I'm an animal! *Ambiguous sound*" << std::endl;
	}