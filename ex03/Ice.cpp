#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice Constructor" << std::endl;
	this->_type = "ice";
}

Ice::Ice(std::string const & type)
{
	std::cout << "Ice Constructor with parameter" << std::endl;
	this->_type = type;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor" << std::endl;
}
Ice::Ice(Ice const & src)
{
	std::cout << "Copy Ice Constructor" << std::endl;
	*this = src;
	return ;
}
Ice &	Ice::operator=(Ice const & rhs)
{
	std::cout << "Ice assignation operator called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

Ice* Ice::clone() const
{
	Ice *clone = new Ice("ice");
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}