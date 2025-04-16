#include "Weapon.hpp"

const std::string& Weapon::getType(void) const
{
	return (type);
}
void	Weapon::setType(const std::string &new_type)
{
	type = new_type;
}
Weapon::Weapon(const std::string &new_type)
	:type(new_type){}
Weapon::~Weapon(void){}
