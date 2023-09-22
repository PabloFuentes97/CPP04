#include "Cat.hpp"

	Cat::Cat(void)
	{
		std::cout << "Default Cat Constructor" << std::endl;
		this->_type = "Cat";
		this->_brain = new Brain;
	}
	
	Cat::Cat(std::string set)
	{
		std::cout << "Constructor Cat with type" << std::endl;
		this->_type = "Cat";
		this->_brain = new Brain;
	}
	
	Cat::Cat(Cat const & src)
	{
		std::cout << "Copy Cat Constructor" << std::endl;
		this->_brain = new Brain;
		(*this->_brain) = (*src._brain);
		*this = src;
	}

	Cat::~Cat(void)
	{
		std::cout << "Cat Destructor" << std::endl;
		delete this->_brain;
	}

	Cat &	Cat::operator=(Cat const & rhs)
	{
		std::cout << "Cat assignation operator called" << std::endl;
		this->_type = rhs._type;
		this->_brain->copyBrain(*(rhs.getBrain()));
		return (*this);
	}

	 void	Cat::makeSound(void) const
	{
		std::cout << "I'm a cat! *miau miau*" << std::endl;
	}

	Brain* Cat::getBrain(void) const
	{
		return (this->_brain);
	}