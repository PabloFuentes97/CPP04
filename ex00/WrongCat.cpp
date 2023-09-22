#include "WrongCat.hpp"

	WrongCat::WrongCat(void)
	{
		this->_type = "WrongCat";
		std::cout << "Default WrongCat Constructor" << std::endl;
	}
	
	WrongCat::WrongCat(std::string set)
	{
		this->_type = "WrongCat";
		std::cout << "Constructor WrongCat with type" << std::endl;
	}
	
	WrongCat::WrongCat(WrongCat const & src)
	{
		std::cout << "Copy WrongCat Constructor" << std::endl;
		*this = src;
		return ;
	}

	WrongCat::~WrongCat(void)
	{
		std::cout << "WrongCat Destructor" << std::endl;
	}

	WrongCat &	WrongCat::operator=(WrongCat const & rhs)
	{
		std::cout << "WrongCat assignation operator called" << std::endl;
		this->_type = rhs._type;
		return (*this);
	}

	 void	WrongCat::makeSound(void) const
	{
		std::cout << "I'm a WrongCat! *miau miau*" << std::endl;
	}