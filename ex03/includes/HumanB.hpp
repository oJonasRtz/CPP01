#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		void	attack(void);
		void	setWeapon(Weapon &_weapon);
		HumanB(const std::string &_name);
};

#endif