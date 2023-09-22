#include "Character.hpp"

//static atribute members
AMateria**	Character::_Junk = NULL;
int			Character::_characterNum = 0;
int			Character::_junkNum = 0;

Character::Character() : _invNum(0)
{
	std::cout << "Default Character Constructo" << std::endl;
	Character::_characterNum++;
	//this->_invNum = 0;
}

Character::Character(std::string name) : _name(name), _invNum(0)
{
	std::cout << "Character Constructor with name" << std::endl;
	Character::_characterNum++;
	/*this->_name = name;
	this->_invNum = 0;*/
}

Character::~Character()
{
	std::cout << "Character Destructor" << std::endl;
	for (int i = 0; i < this->_invNum; i++)
		delete (this->_Inventory[i]);
	Character::_characterNum--;
	if (Character::_characterNum == 0)
	{
		std::cout << "Destroy all junk collected" << std::endl;
		for (int i = 0; i < Character::_junkNum; i++)
			delete (Character::_Junk[i]);
		delete (Character::_Junk);
		Character::_junkNum = 0;
	}
	/*
	for (int i = 0; i < this->_junkNum; i++)
		delete (this->_Junk[i]);
	delete (this->_Junk);*/
}

Character::Character(Character const & src)
{
	std::cout << "Copy Character Constructor" << std::endl;
	/*this->_name = src._name;
	this->_invNum = src._invNum;
	this->_junkNum = src._junkNum;
	for (int i = 0; i < src._invNum; i++)
		this->_Inventory[i] = src._Inventory[i]->clone();
	if (src._junkNum > 0)
		this->_Junk = (AMateria **)malloc(sizeof(AMateria *) * this->_junkNum);
	for (int i = 0; i < src._junkNum; i++)
		this->_Junk[i] = src._Junk[i]->clone();*/
	*this = src;
}
Character &	Character::operator=(Character const & rhs)
{
	std::cout << "Character assignation operator called" << std::endl;
	this->_name = rhs._name;

	for (int i = 0; i < this->_invNum; i++) //delete inventory objects from this
		delete this->_Inventory[i];
	this->_invNum = rhs._invNum;
	for (int i = 0; i < rhs._invNum; i++) // clone rhs inventory objects and pass them to this
		this->_Inventory[i] = rhs._Inventory[i]->clone();

	/*
	if (rhs._junkNum > 0)
	{
		for (int i = 0; i < this->_junkNum; i++) // delete this junk
			delete this->_Junk[i];
		delete this->_Junk;
	}
	if (this->_junkNum > 0)
	{
		AMateria **junk = new AMateria *[rhs._junkNum]; //new junk based on rhs number
		for (int i = 0; i < rhs._junkNum; i++) //clone rhs junk and pass it to this
			junk[i] = rhs._Junk[i]->clone();
		this->_Junk = junk;
	}*/
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (this->_invNum == 4)
		return ;
	this->_Inventory[this->_invNum] = m;
	this->_invNum++;
}

void	Character::reallocJunk(int len)
{
	AMateria **realloc;

	realloc = new AMateria *[len + 2];

	int i;
	for (i = 0; i < len; i++)
		realloc[i] = Character::_Junk[i];
	realloc[i + 1] = NULL;
	delete (Character::_Junk);
	Character::_Junk = realloc;
}

void Character::unequip(int idx)
{
	if (idx >= 4 || !this->_Inventory[idx])
		return ;
	if (Character::_junkNum == 0)
		Character::_Junk = new (AMateria*[1]);
	else
		reallocJunk(Character::_junkNum);
	Character::_Junk[Character::_junkNum] = this->_Inventory[idx];
	Character::_junkNum++;	
	this->_Inventory[idx] = NULL;
	for (int i = idx; i < this->_invNum; i++)
		this->_Inventory[i - 1] = this->_Inventory[i];
	this->_invNum--;
	for (int i = _invNum; i < 4; i++)
		this->_Inventory[i] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || !this->_Inventory[idx])
	{
		std::cout << "Materia doesn't exists in inventory!" << std::endl;
		return ; 
	}
	this->_Inventory[idx]->use(target);
}