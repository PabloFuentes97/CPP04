#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure Constructor" << std::endl;
	this->_type = "cure";
}

Cure::Cure(std::string const & type)
{
	std::cout << "Cure Constructer with parameter" << std::endl;
	this->_type = type;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor" << std::endl;
}
Cure::Cure(Cure const & src)
{
	std::cout << "Copy Cure Constructor" << std::endl;
	*this = src;
	return ;
}
Cure &	Cure::operator=(Cure const & rhs)
{
	std::cout << "Cure assignation operator called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

Cure* Cure::clone() const
{
	Cure *clone = new Cure("Cure");
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}