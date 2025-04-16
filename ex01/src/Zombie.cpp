#include "Zombie.hpp"

Zombie::Zombie(void){}
Zombie::~Zombie(void)
{
	std::cout << RED << this->get_name() << " has been destroyed.\n" << RESET;
}

std::string	Zombie::get_name(void)
{
	return (this->name);
}

void	Zombie::announce(void)
{
	std::cout << this->get_name() << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}
