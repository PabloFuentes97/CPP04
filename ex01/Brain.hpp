#include <iostream>
#include <string>

#ifndef	Brain_HPP
#define	Brain_HPP

class Brain
{
	private:
		std::string	_ideas[100];
		int			_num;
	public:
		Brain(void);
		Brain(std::string set);
		Brain(Brain const & src);
		~Brain(void);
		Brain &	operator=(Brain const & rhs);
		void	copyBrain(Brain const &rhs);
		int		getNum(void);
		void	setIdea(std::string idea);
		std::string &getIdea(int index);
};

#endif