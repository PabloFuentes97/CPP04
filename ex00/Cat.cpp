#include "Cat.hpp"

	Cat::Cat(void)
	{
		this->_type = "Cat";
		std::cout << "Default Cat Constructor" << std::endl;
	}
	
	Cat::Cat(std::string set)
	{
		this->_type = "Cat";
		std::cout << "Constructor Cat with type" << std::endl;
	}
	
	Cat::Cat(Cat const & src)
	{
		std::cout << "Copy Cat Constructor" << std::endl;
		*this = src;
		return ;
	}

	Cat::~Cat(void)
	{
		std::cout << "Cat Destructor" << std::endl;
	}

	Cat &	Cat::operator=(Cat const & rhs)
	{
		std::cout << "Cat assignation operator called" << std::endl;
		this->_type = rhs._type;
		return (*this);
	}

	 void	Cat::makeSound(void) const
	{
		std::cout << "I'm a cat! *miau miau*" << std::endl;
	}