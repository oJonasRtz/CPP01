#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (!weapon)
		return ;
	std::cout << name << " attacks with their " << weapon->getType() << "\n";
}


HumanB::HumanB(const std::string &_name)
	:name(_name)
{
	weapon = NULL;
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	weapon = &_weapon;
}
