#include "AAnimal.hpp"

	AAnimal::AAnimal(void)
	{
		std::cout << "Default AAnimal Constructor" << std::endl;
	}
	
	AAnimal::AAnimal(std::string setType) : _type(setType) 
	{
		std::cout << "Constructor AAnimal with name" << std::endl;
	}
	
	AAnimal::AAnimal(AAnimal const & src)
	{
		std::cout << "Copy AAnimal Constructor" << std::endl;
		*this = src;
		return ;
	}

	AAnimal::~AAnimal(void)
	{
		std::cout << "AAnimal Destructor" << std::endl;
	}

	std::string	AAnimal::getType(void) const
	{
		return(this->_type);
	}

	AAnimal &	AAnimal::operator=(AAnimal const & rhs)
	{
		std::cout << "AAnimal assignation operator called" << std::endl;
		this->_type = rhs.getType();
		return (*this);
	}