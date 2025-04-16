#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string	type;
	public:
		const std::string	&getType(void) const;
		void				setType(const std::string &type);
	Weapon(const std::string &new_type);
	~Weapon(void);
};

#endif
