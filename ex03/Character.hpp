#pragma once

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria		*_Inventory[4];
		int				_invNum;
		static AMateria	**_Junk;
		static int		_characterNum;
		static int		_junkNum;
		static void		reallocJunk(int len);
	public:
		Character();
		Character(std::string name);
		Character(Character const & src);
		~Character();
		Character &	operator=(Character const & rhs);
		std::string const & getName() const;
		void	equip(AMateria* m);
		void 	unequip(int idx);
		void 	use(int idx, ICharacter& target);
};

std::ostream &operator<<(std::ostream &o, Character const &c);

#endif