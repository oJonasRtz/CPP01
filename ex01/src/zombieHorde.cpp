#include "Zombie.hpp"

Zombie*	Zombie::zombieHorde(int n, std::string name)
{
	if (n <= 0)
		return (NULL);

	Zombie*	horde =  new Zombie[n];
	for (int i = 0; i < n; i++)
		horde[i].set_name(name);
	return (horde);
}
