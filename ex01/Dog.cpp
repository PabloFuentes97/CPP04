#include "Dog.hpp"

	Dog::Dog(void)
	{
		std::cout << "Default Dog Constructor" << std::endl;
		this->_type = "Dog";
		this->_brain = new Brain;
	}
	
	Dog::Dog(std::string set)
	{
		std::cout << "Constructor Dog with type" << std::endl;
		this->_type = "Dog";
		this->_brain = new Brain;
	}
	
	Dog::Dog(Dog const & src)
	{
		std::cout << "Copy Dog Constructor" << std::endl;
		this->_brain = new Brain;
		*this = src;
		return ;
	}

	Dog::~Dog(void)
	{
		std::cout << "Dog Destructor" << std::endl;
		delete this->_brain;
	}

	Dog &	Dog::operator=(Dog const & rhs)
	{
		std::cout << "Dog assignation operator called" << std::endl;
		this->_type = rhs._type;
		this->_brain->copyBrain(*(rhs.getBrain()));
		return (*this);
	}

	void	Dog::makeSound(void) const
	{
		std::cout << "I'm a Dog! *woof woof guau guau*" << std::endl;
	}

	Brain* Dog::getBrain(void) const
	{
		return (this->_brain);
	}