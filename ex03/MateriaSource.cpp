#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "New Materia Source constructor" << std::endl;
	this->_materiaNum = 0;
}

MateriaSource::~MateriaSource()
{
	std::cout << "Destructor Materia Source" << std::endl;
	for (int i = 0; i < this->_materiaNum; i++)
		delete this->_materias[i];
}
MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "Copy MateriaSource Constructor" << std::endl;
	this->_materiaNum = src._materiaNum;
	for (int i = 0; i < src._materiaNum; i++)
		this->_materias[i] = src._materias[i]->clone();
}
MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs)
{
	std::cout << "MateriaSource assignation operator called" << std::endl;
	this->_materiaNum = rhs._materiaNum;
	for (int i = 0; i < rhs._materiaNum; i++)
		this->_materias[i] = rhs._materias[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	if (this->_materiaNum == 4)
		return ;
	std::cout << "learn Materia" << std::endl;
	this->_materias[this->_materiaNum] = materia;
	std::cout << "Materia learned: " << this->_materias[this->_materiaNum]->getType() << std::endl;
	this->_materiaNum++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria	*newMateria;

	if (this->_materiaNum == 0)
		return (0);
	for (int i = 0; i < this->_materiaNum; i++)
		if (!this->_materias[i]->getType().compare(type))
			return (this->_materias[i]->clone());
	return (0);
}