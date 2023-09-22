#include "AMateria.hpp"

AMateria::AMateria()
{

};

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::~AMateria()
{

}

AMateria::AMateria(AMateria const & src)
{
	std::cout << "Copy AMateria Constructor" << std::endl;
	*this = src;
	return ;
}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	std::cout << "AMateria assignation operator called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{

}