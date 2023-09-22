#include "Dog.hpp"

	Dog::Dog(void)
	{
		this->_type = "Dog";
		std::cout << "Default Dog Constructor" << std::endl;
	}
	
	Dog::Dog(std::string set)
	{
		this->_type = "Dog";
		std::cout << "Constructor Dog with type" << std::endl;
	}
	
	Dog::Dog(Dog const & src)
	{
		std::cout << "Copy Dog Constructor" << std::endl;
		*this = src;
		return ;
	}

	Dog::~Dog(void)
	{
		std::cout << "Dog Destructor" << std::endl;
	}

	Dog &	Dog::operator=(Dog const & rhs)
	{
		std::cout << "Dog assignation operator called" << std::endl;
		this->_type = rhs._type;
		return (*this);
	}

	void	Dog::makeSound(void) const
	{
		std::cout << "I'm a Dog! *woof woof guau guau*" << std::endl;
	}