#include "Brain.hpp"

	Brain::Brain(void)
	{
		std::cout << "Default Brain Constructor" << std::endl;
		this->_num = 0;
	}
	
	Brain::Brain(std::string set)
	{
		std::cout << "Constructor Brain with type" << std::endl;
		this->_num = 0;
	}
	
	Brain::Brain(Brain const & src)
	{
		std::cout << "Copy Brain Constructor" << std::endl;
		int	num = src._num;
		for (int i = 0; i < num; i++)
			this->_ideas[i] = src._ideas[i];
		this->_num = num;
		*this = src;
		return ;
	}

	Brain::~Brain(void)
	{
		std::cout << "Brain Destructor" << std::endl;
		for (int i = 0; i < this->_num; i++)
		{
			if (!this->_ideas[i].empty())
				this->_ideas[i].clear();
		}
		this->_num = 0;
	}

	void	Brain::copyBrain(Brain const &rhs)
	{
		for (int i = 0; i < rhs._num; i++)
		{
			if (!this->_ideas[i].empty())
				this->_ideas[i].clear();
			this->_ideas[i] = rhs._ideas[i];
		}
		this->_num = rhs._num;
	}

	Brain &	Brain::operator=(Brain const & rhs)
	{
		std::cout << "Brain assignation operator called" << std::endl;
		copyBrain(rhs);
		return (*this);
	}

	int		Brain::getNum(void)
	{
		return (this->_num);
	}

	void	Brain::setIdea(std::string idea)
	{
		if (this->_num == 99)
		{
			std::cout << "Brain is already full of ideas!" << std::endl;
			return ;
		}
		this->_ideas[this->_num] = idea;
		this->_num++;
	}

	std::string & Brain::getIdea(int index)
	{
		return (this->_ideas[index]);
	}