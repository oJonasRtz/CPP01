#include "Zombie.hpp"

int	main(void)
{
	std::cout << GREEN << std::setfill('-') << std::setw(42) << "-" << std::endl << std::flush;
	std::cout << "\tHeap allocated Zombies\n" << std::flush;
	std::cout << std::setfill('-') << std::setw(42) << "-" << std::endl << RESET << std::flush;

	//	Get input
	std::string	input;
	Zombie		*z;

	std::cout << ORANGE << "Enter your zombie name: " << RESET;
	std::getline(std::cin, input);
	z = Zombie::newZombie(input);
	z->announce();
	delete z;

	std::cout << GREEN << std::setfill('-') << std::setw(42) << "-" << std::endl;
	std::cout << "\tStack allocated Zombies\n";
	std::cout << std::setfill('-') << std::setw(42) << "-" << std::endl << RESET;
	Zombie::randomChump("Bob");
	Zombie::randomChump("Patrick");
	Zombie::randomChump("Vanessa");
	Zombie::randomChump("Zoe");
	return (0);
}
